//
// Created by bhw on 03/12/2021.
//

#include "Date.h"
#include <iostream>

int Date ::getDay() {return day;}
int Date ::getMonth(){return month;}
int Date ::getYear() {return year;}

void Date ::printDate() {
    std::cout << getDay() << "/" << getMonth() <<"/" << getYear();
}

int main (){
    Date bday(14,13,2002);
    bday.printDate();
}

