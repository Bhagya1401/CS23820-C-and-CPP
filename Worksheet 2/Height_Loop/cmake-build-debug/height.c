//
// Created by bhagya on 20/10/2021.
//

#include "height.h"

double height_metres (int ft, int in){
    int ft_to_in = ft * 12;
    double centi_metres =  (ft_to_in + in) * 2.54;
    double metres = centi_metres/100;
    return metres;
}