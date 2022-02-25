#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    puts("Welcome to your MPG Calculator.");

    //Initiates the variables totmiles and totgals to keep track of the total amount of both gas and miles.
    float totmiles;
    float totgals;

    //Puts entire operation in infinite loop
    while (1)
    {
        //Initiates the variable gals and gets float input using scanf
        float gals;
        printf("Enter gallons used (-1 to end): ");
        scanf("%f", &gals);

        //If the correct exit number is entered, loop ends
        if (gals == -1)
        {
            break;
        }

        //Initiates the variable miles and gets float input using scanf
        float miles;
        printf("Enter miles driven: ");
        scanf("%f", &miles);

        //Prints the miles per gallon from this trip and adds the miles and gallons to the total miles and gallons
        printf("The miles per gallon on this trip was %f.\n", miles / gals);
        totmiles += miles;
        totgals += gals;
    }

    //Prints out the total results from the loop
    printf("Total amount of fuel: %f gallons\n", totgals);
    printf("Total distance driven: %f miles\n", totmiles);
    printf("Overall MPG: %f\n", totmiles / totgals);
}