/* 
 * File:   recursive.cpp
 * Author: nealsnooke
 */
#include <iostream>
#include <cstdlib>

using namespace std;
/*
int myglobal = 0;

void doIt(int level){
    static int mystaticlocal = 42;
    int a = 1;
    int *ap = &a;

    int *b = (int*)malloc(sizeof(int));
    *b = 2;

    cout << "level " << level << '\n' << "ap points to: " << ap <<
            "     b points to: " << b << endl;

    cout << "value of a is:" << a << " value of b is: " <<*b << endl;
    cout << "location of level: " << &level << endl;
    cout << "location of a: " << &a << " size of ap is: " << (int)sizeof(ap) << endl;
    cout << "location of static " << &mystaticlocal << endl;
    
    if (level>0)
        doIt(--level);
    return;
}



int main(int argc, char** argv) {
    cout << "\nsize of an int on this machine is: " << (int)sizeof(int) << endl;
    doIt(3);
     cout << '\n';
    doIt(3);
    cout << "myglobal location is:" << &myglobal << endl;
    return 0;
    
}


/*
//Task 1
int main(){
    double num1;
    double num2;
    std::cin >> num1;
    std::cin >> num2;
    std::cout << "Num1: " << num1 << "Num2: " << num2 << "Sum of two nums: " << num1 +num2;
}

*/
/*

//Task 2

double harmonic(int num){
    double num_out;
    for (int i = 1; i < num + 1; i++) {
        num_out += 1.0/i;
    }
    return num_out;
}
int main(){
    int num;
    std::cout << "Enter number: ";
    std::cin >> num;

    std::cout << "The nth Harmonic of your number is " << harmonic(num) <<std::endl;


    //for range version

    for (auto x: {5,10,100,1000}) {
        std::cout << "The nth Harmonic of " << x <<" is " << harmonic(x) <<std::endl;
    }

}
*/

