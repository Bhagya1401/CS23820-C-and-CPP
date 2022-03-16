
#include "Mammal.h"
#include <iostream>
using namespace std;

/*
 * data hiding class for Mammal
 */
class MammalDataClass {
public:
    int Length;
    int Weight;
    bool Nocturnal;
};

Mammal::Mammal(const Mammal &OriginalMammalObject) {
    MammalDataObject = new MammalDataClass;
    MammalDataObject = new MammalDataClass(*(OriginalMammalObject.MammalDataObject));
    cout << "mammal constructed\n";
};

Mammal::~Mammal(void) {
    delete MammalDataObject;
    MammalDataObject = NULL; // just to make sure
    cout << "mammal deconstructed\n";
}

void Mammal::Write(void) {
    cout << "The length of the mammal is " << MammalDataObject->Length << endl;
    cout << "The weight of the mammal is " << MammalDataObject->Weight << endl;
    cout << "The mammal is ";
    if (!MammalDataObject->Nocturnal)
        cout << "not nocturnal" << endl;
    else
        cout << "nocturnal" << endl;
}

void Mammal::ReadData(void) {
    char NocturnalAnswer;
    cout << "What is the length of the mammal? " << endl;
    cin >> MammalDataObject->Length;
    cout << "What is the weight of the mammal? " << endl;
    cin >> MammalDataObject->Weight;
    cout << "Is the mammal nocturnal? (y/n)" << endl;
    cin >> NocturnalAnswer;
    MammalDataObject->Nocturnal = (NocturnalAnswer == 'y' ? true : false);
    cin.clear();
}

