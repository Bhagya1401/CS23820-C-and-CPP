
#include "Bat.h"
#include <iostream>
using namespace std;

#define FOODSTRINGLENGTH 30

class BatDataClass {
public:
    int WingSpread;
    char * Food;
};

Bat::Bat(void) {
    BatDataObject = new BatDataClass;
    BatDataObject -> Food = new char[FOODSTRINGLENGTH];
    cout << "bat constructed\n";
}

Bat::~Bat(void) {
    delete BatDataObject -> Food;
    BatDataObject -> Food = NULL;
    delete BatDataObject;
    BatDataObject = NULL;
    cout << "bat deconstructed\n";
}

void Bat::ReadData(void) {
    Mammal::ReadData();
    cout << "What is the wingspan of the bat? " << endl;
    cin >> BatDataObject -> WingSpread;
    cout << "What does the bat eat? " << endl;
    cin >> BatDataObject-> Food;
    cin.clear();
}

void Bat::Write(void) {
    Mammal::Write();
    cout << "The wingspread of the bat is " << BatDataObject -> WingSpread << endl;
    cout << "The bat eats " << BatDataObject -> Food << endl << endl;
}

void Bat::Draw(void) {
    cout << "show a bat picture" << endl;
}