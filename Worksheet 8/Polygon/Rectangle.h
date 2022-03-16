//
// Created by bhagy on 16/12/2021.
//

#ifndef POLYGON_RECTANGLE_H
#define POLYGON_RECTANGLE_H
#include "Polygon.h"

class Rectangle :public Polygon{
public:
    Rectangle(void);
    virtual ~Rectangle();
    virtual double area();
};


#endif //POLYGON_RECTANGLE_H
