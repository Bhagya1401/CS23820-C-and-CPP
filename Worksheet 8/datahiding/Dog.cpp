
#include "Dog.h"
#include <iostream>
using namespace std;

#define STRINGLENGTH 30

/*
 * data hiding class for Dog
 */
class DogDataClass {
public:
    char * Breed;
    char * Pedigree;
};

Dog::Dog(const Dog & OriginalDogObject )
: Mammal((Mammal &) OriginalDogObject){
    DogDataObject = new DogDataClass;
    DogDataObject = new DogDataClass(*(OriginalDogObject.DogDataObject));
//    DogDataObject->Breed = new char[STRINGLENGTH];
//    DogDataObject -> Pedigree = new char [STRINGLENGTH];
    cout<<"dog constructed\n";
}

Dog::~Dog(void) {
    delete DogDataObject->Breed;
    DogDataObject->Breed = NULL; // just to make sure
    delete DogDataObject->Pedigree;
    DogDataObject->Pedigree = NULL;
    delete DogDataObject;
    DogDataObject = NULL; // just to make sure
    cout<<"dog deconstructed\n";
}

void Dog::ReadData(void) {
    Mammal::ReadData();
    cout << "What is the dog breed? " << endl;
    cin >> DogDataObject->Breed;
    cout << "What is the dog pedigree? " << endl;
    cin >> DogDataObject -> Pedigree;
    cin.clear();
    cout<<'\n';
}

void Dog::Write(void) {
    Mammal::Write();
    cout << "The dog breed is " << DogDataObject->Breed << endl;
    cout << "The dog pedigree is " << DogDataObject->Pedigree << endl;
}

void Dog::Draw(void){
// do sth here
}
