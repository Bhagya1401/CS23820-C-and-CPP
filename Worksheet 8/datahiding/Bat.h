#pragma once
#include "Mammal.h"
class BatDataClass;

class Bat :public Mammal {
public:
    Bat(void);
    virtual ~Bat(void);
    void ReadData(void);
    void Write(void);
    void Draw(void);
private:
    BatDataClass * BatDataObject;
};
