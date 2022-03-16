#include <iostream>


#include "Polygon.h"
#include "Rectangle.h"
#include "Triangle.h"

int main() {
    Polygon p;

    Rectangle newRec;
    newRec.setValues(6,6);
    Triangle newTri;
    newTri.setValues(6,6);

    std::cout << newRec.area();
    std::cout << newTri.area();
    return 0;
}
