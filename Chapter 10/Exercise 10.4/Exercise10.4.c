#include <stdio.h>

// Function to calculate the day of the week
int calculateDayOfWeek(int day, int month, int year) {
    // Adjust the month and year if the month is January or February
    if (month < 3) {
        month += 12;  // Convert Jan and Feb to 13 and 14 of the previous year
        year -= 1;    // Decrease the year
    }

    // Calculate nd using the provided formula
    int nd = (13 * ((month + 1) / 5) + day + year + (year / 4) - (year / 100) + (year / 400)) % 7;
    return nd;
}

int main(void) {
    int day, month, year;

    // Prompt user for day, month, and year
    printf("Enter day (1-31): ");
    scanf("%d", &day);
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year (e.g., 1965): ");
    scanf("%d", &year);

    // Call the function and store the result
    int dayOfWeek = calculateDayOfWeek(day, month, year);

    // Display the result
    printf("The day of the week for %02d/%02d/%04d is: %d (0=Monday, 1=Tuesday, ..., 6=Sunday)\n", 
           day, month, year, dayOfWeek);

    return 0;  // Exit code
}