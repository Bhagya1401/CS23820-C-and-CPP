//
// Created by bhagy on 16/12/2021.
//

#include "Polygon.h"
#include "iostream"
using namespace std;

Polygon ::Polygon() {
    cout << "Polygon created";
}

Polygon ::~Polygon() {
    cout << "Polygon destroyed";
}

void Polygon :: setValues(int w, int h){
    width = w;
    height = h;
}

double Polygon::area() {
    return 0;
}
