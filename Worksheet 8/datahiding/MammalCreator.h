#pragma once
#include "Mammal.h"

class MammalCreator {
public:
    MammalCreator(void);
    ~MammalCreator(void);

    void CreateMammal(Mammal * & MammalCreated);
};
