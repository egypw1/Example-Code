#include <stdio.h>
#include <math.h>
#include <float.h>

// Forward TC function
float NISTdegCtoMilliVoltsKtype(float tempDegC);  // returns EMF in millivolts

// Inverse TC function
float NISTmilliVoltsToDegCKtype(float tcEMFmV);  // returns temp in degC assuming 0 degC cold jcn

// Function to convert ADC value to voltage
float ADCtoVoltage(float adcValue, float VRef);

// Function to convert Kelvin to Celsius
float KelvinToCelsius(float tempk);


int main()
{
    // Define VRef (reference voltage)

    const float VRef = 5.0;

    //User input of A0 and A1

    float adcValueA0, adcvalueA1;
    printf("Please enter ADC value of the Thermocouple (A0): ");
    scanf("%f", &adcValueA0);
    printf("Enter ADC value of the Thermistor (A1): ");
    scanf("%f", &adcvalueA1);

    // Define Thermistor constants

    const float T0 = 298.15f;  //25degC in Kelvin
    const float R0 = 10.0f; // resistance at 25degC in kOhms
    const float B = 3975.0f; // constant [k]

    // Calculate thermistor temperature in degrees C ( Part b, i,ii,iii & v)

    float adcVoltage = ADCtoVoltage(adcvalueA1, VRef);
    float thermistResistance = ((10.0f * 3.3f) / adcVoltage) - 10.0f;
    float tempK = 1.0f / ((1.0f / T0) + (1.0f / B) * logf(thermistResistance / R0));
    float thermistorTempC = KelvinToCelsius(tempK);


    // Calculate thermocouple temperature in degrees C ( Part c, i - iv)

    float thermocoupleVoltage = ((adcVoltage - 0.35f) / 54.4f);     // Calculating thermocouple Voltage (EMF)
    float thermocoupleMilliVolts = thermocoupleVoltage * 1000;      // Converting EMF to milliVolts

    float compensationVoltage = NISTdegCtoMilliVoltsKtype(thermistorTempC);     // Using F(forward) to calculate compensation voltage

    float totalVoltage = thermocoupleMilliVolts + compensationVoltage;     // Compensation + thermocouple voltage

    float thermocoupleTempC = NISTmilliVoltsToDegCKtype(totalVoltage);      // Using F(inverse) to calculate thermocouple temperature
    
    // Output results

    printf("Thermistor temperature (deg C): %.2f \n", thermistorTempC);
    printf("Thermocouple temperature with CJC (deg C): %.2f \n", thermocoupleTempC);

    return 0;
}

// function to convert ADC value to voltages. (Part a, equation 1)

float ADCtoVoltage(float adcValue, float VRef) {
    float VoltageADC = (adcValue * VRef) / 1024.0f; // Converting ADC value to voltage
    return VoltageADC;
}

// function to convert degrees K to degrees C (Part b, (iv))
float KelvinToCelsius(float tempk) {
    float tempC = tempk - 273.15f; // convert kelvin to Celsius
    return tempC;
}


/* returns EMF in millivolts */
float NISTdegCtoMilliVoltsKtype(float tempDegC)
{
    int i;
    float milliVolts = 0;
    if(tempDegC >= -170 && tempDegC < 0)
    {
        const float coeffs[11] =
        {
            0.000000000000E+00f,
            0.394501280250E-01f,
            0.236223735980E-04f,
            -0.328589067840E-06f,
            -0.499048287770E-08f,
            -0.675090591730E-10f,
            -0.574103274280E-12f,
            -0.310888728940E-14f,
            -0.104516093650E-16f,
            -0.198892668780E-19f,
            -0.163226974860E-22f
        };
        for (i=0; i<=10; i++)
        {
            milliVolts += coeffs[i] * powf(tempDegC,(float)i);
        }
    }
    else if(tempDegC >= 0 && tempDegC <= 1372)
    {
        const float coeffs[10] =
        {
            -0.176004136860E-01f,
            0.389212049750E-01f,
            0.185587700320E-04f,
            -0.994575928740E-07f,
            0.318409457190E-09f,
            -0.560728448890E-12f,
            0.560750590590E-15f,
            -0.320207200030E-18f,
            0.971511471520E-22f,
            -0.121047212750E-25f
        };
        const float a0 =  0.118597600000E+00f;
        const float a1 = -0.118343200000E-03f;
        const float a2 =  0.126968600000E+03f;

        for (i=0; i<=9; i++)
        {
            milliVolts += coeffs[i] * powf(tempDegC,(float)i);
        }

        milliVolts += a0*expf(a1*(tempDegC - a2)*(tempDegC - a2));
    }
    else
    {
        milliVolts = FLT_MAX;
    }
    return milliVolts;
}

// returns temperature in deg C.
float NISTmilliVoltsToDegCKtype(float tcEMFmV)
{

        int i, j;
        float tempDegC = 0;
        const float coeffs[11][3] =
        {
          {0.0000000E+00f,  0.000000E+00f, -1.318058E+02f},
         {2.5173462E+01f,  2.508355E+01f,  4.830222E+01f},
         {-1.1662878E+00f,  7.860106E-02f, -1.646031E+00f},
         {-1.0833638E+00f, -2.503131E-01f,  5.464731E-02f},
         {-8.9773540E-01f,  8.315270E-02f, -9.650715E-04f},
         {-3.7342377E-01f, -1.228034E-02f,  8.802193E-06f},
         {-8.6632643E-02f,  9.804036E-04f, -3.110810E-08f},
         {-1.0450598E-02f, -4.413030E-05f,  0.000000E+00f},
         {-5.1920577E-04f,  1.057734E-06f,  0.000000E+00f},
         {0.0000000E+00f, -1.052755E-08f,  0.000000E+00f}
       };
       if(tcEMFmV >=-5.891 && tcEMFmV <=0 )
       {
           j=0;
       }
       else if (tcEMFmV > 0 && tcEMFmV <=20.644  )
       {
           j=1;
       }
       else if (tcEMFmV > 20.644 && tcEMFmV <=54.886  )
       {
           j=2;
       }
       else
       {
           return FLT_MAX;
       }

       for (i=0; i<=9; i++)
        {
            tempDegC += coeffs[i][j] * powf(tcEMFmV,(float)i);
        }
    return tempDegC;
}