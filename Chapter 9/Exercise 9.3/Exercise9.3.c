#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // declaring variable to 
    char name[25];
    int i = 1;

   // asking the user to input their name 
   printf("\nWhat's your name?: ");
   // searching for the name and storing it in "name"
   fgets(name, 25, stdin);
   //Gettting rid of teh new line character at the end of the user input
   // name[strlen(name) - 1]  setting this to a nul character
   name[strlen(name)- 1] = '\0';

    // loop infinitely as i is always 1
   while (i == 1) {
    printf("Hello %s\nWelcome %s\n\n", name, name);
   }
   
   return 0;
}
