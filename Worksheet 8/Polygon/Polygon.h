//
// Created by bhagy on 16/12/2021.
//

#ifndef POLYGON_POLYGON_H
#define POLYGON_POLYGON_H


class Polygon {
protected:
    int width;
    int height;
public:
    Polygon();
    virtual ~Polygon(void);
    void setValues(int w, int h);
    virtual double area();
};






#endif //POLYGON_POLYGON_H
