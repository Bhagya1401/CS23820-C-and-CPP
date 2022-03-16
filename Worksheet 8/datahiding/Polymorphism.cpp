// Polymorphism.cpp : Defines the entry point for the console application.

#include "Mammal.h"
#include "MammalCreator.h"
#include <iostream>
using namespace std;

#define LENGTH 2

void createAnimals(int number) {
    Mammal * Animals[number]; // declare an array of pointers to Mammals
    MammalCreator MyMammalCreator; // declare the MammalCreator object
    // to create Mammals of all kinds
    char TempChar;

    cout << "Please create " << LENGTH << " animals\n\n";

    for (int i = 0; i < LENGTH; i++) // call CreateMammal to create each Mammal
    {
        MyMammalCreator.CreateMammal(Animals[i]);
    }

    for (int i = 0; i < LENGTH; i++) // call the polymorphic ReadData function for each mammal
    {
        Animals[i]->ReadData();
        cout << endl;
    }

    for (int i = 0; i < LENGTH; i++) // call the polymorphic Write function for each mammal
    {
        Animals[i]->Write();
        cout << endl;
    }

    //cin >> TempChar;

    for (int i = 0; i < LENGTH; i++) // delete each Mammal - no memory leaks!
        delete Animals[i];
}

int testFunctionCall();
/*
 * 
 */


int main(int argc, char* argv[]) {

   // createAnimals(2);

    // to test the effect of not having a deep copy constructor
    // replace createAnimals with this and declare it somewhere in the file
    testFunctionCall();
    
    return 0;
}