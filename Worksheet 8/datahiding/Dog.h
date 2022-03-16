#pragma once
#include "Mammal.h"
class DogDataClass;

class Dog : public Mammal {
public:
    Dog(const Dog & OriginalDogObject );
    virtual ~Dog(void);
    void ReadData(void);
    void Write(void);
    void Draw(void);
private:
    DogDataClass * DogDataObject;
};

