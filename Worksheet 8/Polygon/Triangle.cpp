//
// Created by bhagy on 16/12/2021.
//
#include <iostream>
#include "Triangle.h"

void Triangle::Triangle(): Polygon(){
    cout << "Triangle created";
}
void Triangle:: ~Triangle() {
    Polygon::~Polygon();
    cout << "Triangle destroyed";
}

double Triangle ::area() {
    return ((width*height)/2.0);
}