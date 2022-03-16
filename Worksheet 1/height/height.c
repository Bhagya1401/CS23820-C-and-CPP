//
// Created by bhw on 15/10/2021.
//
#include "height.h"

double in_metres(int feet, int inch){
    int one_inch = 2.54;//in cm
    //12 inch is 1 feet
    double metres;
    metres = ( ((feet*12) + inch) * 2.54 );
    metres /= 100;
    return metres;
}