#pragma once
#include "Mammal.h"

class ElkDataClass;

class Elk : public Mammal {
private:
    ElkDataClass * ElkDataObject;
public:
    Elk(void);
    virtual ~Elk(void);
    void ReadData(void);
    void Write(void);
    void Draw(void);
};
