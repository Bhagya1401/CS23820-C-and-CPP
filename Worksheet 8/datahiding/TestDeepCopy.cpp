#include <iostream>
using namespace std;

#include "Dog.h"
void myFunction(Dog m) {
    cout << "\nmyFunction entered here is the Dog\n";
    m.Write();
    cout << "myFunction exited\n \n";
}

void testFunctionCall() {
    cout << "Create a dog now\n";
    Dog d;
    cout << "Add some dog data now\n";
    d.ReadData();
    cout << "Pass the Dog to a function\n";
    myFunction(d);
    cout << "All done\n";
    cout << "\nhere is the Dog again\n";
    d.Write(); /* this will likely cause an error unless deep copy of Dog is implemented*/
}
