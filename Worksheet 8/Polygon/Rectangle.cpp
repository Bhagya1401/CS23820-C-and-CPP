//
// Created by bhagy on 16/12/2021.
//

#include "Rectangle.h"

using namespace std;

void Rectangle ::Rectangle() :Polygon(){
    cout << "Rectangle created";
}


double Rectangle ::area() {
    return (width * height);
}
