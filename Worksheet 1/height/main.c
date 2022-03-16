#include <stdio.h>
#include "height.h"
int main() {
    int feet, inch;
    double metres;
    scanf("Feet? %d", &feet);
    scanf("Inch? %d",&inch);

    metres = in_metres(feet,inch);

    printf("Your height in metres is %f", metres);



    return 0;
}
