#include <stdio.h>
#include "height.h"
int main() {
    int feet, inch, num;
    double height_m;

//For loop implementation
/*
    printf("How many times should the program run: ");
    scanf("%d", &num);
    for (int i = 0; i < num; ++i) {
        printf("Please enter your height \n");
        printf("Feet:");
        scanf ("%d" , &feet);
        printf("Inches:");
        scanf ("%d" , &inch);
        height_m = height_metres(feet,inch);
        printf("Your height in metres is: %f \n", height_m);
    }
    printf("The program is over :)");

*/

//While loop implementation
    do {
        printf("Please enter your height \n");
        printf("Feet:");
        scanf ("%d" , &feet);
        printf("Inches:");
        scanf ("%d" , &inch);
        height_m = height_metres(feet,inch);
        printf("Your height in metres is: %f \n", height_m);
    } while (feet >= 0);

    return 0;
}
