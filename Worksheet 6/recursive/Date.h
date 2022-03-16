//
// Created by bhw on 03/12/2021.
//

#ifndef RECURSIVE_DATE_H
#define RECURSIVE_DATE_H
#include <iostream>

class Date {
private:
    int day,month,year;
public:
    Date(int d, int m , int y){
        if( m > 12 or m < 0){
            std::cout << "Invalid month" << std::endl;
        }
        day = d;
        month = m;
        year = y;
    }
    int getDay();
    int getMonth();
    int getYear();
    void printDate();
};


#endif //RECURSIVE_DATE_H
