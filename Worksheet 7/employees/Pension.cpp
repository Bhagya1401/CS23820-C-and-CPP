/* 
 * File:   Pension.cpp
 * Author: nealsnooke
 *
 * Created on 16 February 2011, 14:33
 */

#include <cstdlib>
#include <string>
#include <iostream>
#include "Pension.h"

#include <ctime> // time and date
#include "Date.h"

/**
 * Find the current year
 * @return - the current year
 */
int getCurrentYear(void){
    time_t rawtime = time(&rawtime);
    return localtime(&rawtime)->tm_year+1900;
}

/**
 * constructor
 * @param scheme
 * @param performance
 */
Pension::Pension(std::string scheme, double performance){
    this->performance = performance;
    schemeName = scheme;
}

/**
 * destructor
 */
Pension::~Pension(){};

/**
 * calculate the benefits for this pension scheme for an employee
 * @param e - the employee
 * @param monthsInScheme - duration in pension scheme
 * @return - returns the pension value
 */
double Pension::calculateBenefits(Employee &e, int monthsInScheme ) {

    double amount = e.salary*monthsInScheme*performance;


    int age = getCurrentYear() - e.birthDate.getYear();
    std::cout << "Pension::calculateBenefits Age is: " << age << std::endl;
    if (age < 65) {
        // reduce amount - not retirement age
        amount = amount / (65-age);
    }
    return amount;
}

/**
 * display the Pension scheme information on console
 */
void Pension::print() const{
    using namespace std;
   
    cout<<"Pension scheme: " << schemeName << " : Performance " << performance << endl;
}

