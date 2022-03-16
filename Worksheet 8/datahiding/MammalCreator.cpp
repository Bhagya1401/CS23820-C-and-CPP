
#include "MammalCreator.h"
#include "Elk.h"
#include "Dog.h"
#include "Bat.h"

#include <iostream>
using namespace std;

MammalCreator::MammalCreator(void) {
}

MammalCreator::~MammalCreator(void) {
}

void MammalCreator::CreateMammal(Mammal * & MammalCreated) {
    char InputCharacter;

    do {
        cout << "What type of animal would you like to create:" << endl;
        cout << "elk (e) or dog (d) or bat (b) ?" << endl;
        cin >> InputCharacter;
    } while (InputCharacter != 'e' && InputCharacter != 'd' && InputCharacter != 'b');

    switch (InputCharacter) {

        case ('e'):
        {
            Elk * TempElk = new Elk;
            MammalCreated = (Mammal *) TempElk;
            break;
        }
        case ('d'):
        {
            Dog * TempDog = new Dog;
            MammalCreated = (Mammal *) TempDog;
            break;
        }
        case ('b'):
        {
            Bat * TempBat = new Bat;
            MammalCreated = (Mammal *) TempBat;
            break;
        }
        default:
            cout << "panic!  should never get here" << endl;
    }
}
