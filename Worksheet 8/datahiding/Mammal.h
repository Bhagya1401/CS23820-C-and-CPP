#pragma once
class MammalDataClass;

class Mammal {
private:
    MammalDataClass * MammalDataObject;
public:
    Mammal();
    Mammal(const Mammal &OriginalMammalObject);
    virtual ~Mammal(void);
    virtual void Write(void);
    virtual void ReadData(void);
    virtual void Draw(void) = 0; // must be defined in derived classes
};
