//
// Created by bhagy on 16/12/2021.
//

#ifndef POLYGON_TRIANGLE_H
#define POLYGON_TRIANGLE_H
#include "Polygon.h"

class Triangle: public Polygon{
public:
    Triangle(void);
    virtual ~Triangle();
    virtual double area();

};


#endif //POLYGON_TRIANGLE_H
