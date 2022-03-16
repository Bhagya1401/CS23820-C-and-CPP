
#include "Elk.h"

#include <iostream>
using namespace std;

class ElkDataClass{
public:
    int Height;
    int AntlerPoints;
};

Elk::Elk(void) {
    ElkDataObject = new ElkDataClass;
    cout << "elk constructed\n";
}

Elk::~Elk(void) {
    delete ElkDataObject;
    ElkDataObject =NULL;
    cout<<"elk deconstructed\n";
}

void Elk::ReadData(void) {
    Mammal::ReadData();
    cout << "What is the height of the elk? " << endl;
    cin >> ElkDataObject ->Height;
    cout << "How many antler points does the elk have? " << endl;
    cin >> ElkDataObject-> AntlerPoints;
    cin.clear();
}

void Elk::Write(void) {
    Mammal::Write();
    cout << "The height of the elk is " << ElkDataObject-> Height << endl;
    cout << "The elk has " << ElkDataObject-> AntlerPoints << " antler points." << endl << endl;
}

void Elk::Draw(void) {
    cout << "show an elk picture";
}
