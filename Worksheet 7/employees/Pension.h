/* 
 * File:   Pension.h
 * Author: nealsnooke
 *
 * Created on 16 February 2011, 14:34
 */

#ifndef PENSION_H
#define	PENSION_H
#include <cstdlib>
#include <string>
#include "Employee.h"

class Pension
{
public:
    // pension constructor
    Pension(std::string scheme, double performance);
    // pension desctuctor
    ~Pension();

    // find the benefits provided by this pension to an employee
    double calculateBenefits(Employee &e, int monthsInScheme);

    // output this pension scheme details on console
    void print() const;



private:
    // name of the pension scheme
    std::string schemeName;

    // the performance multiplier for the pension scheme
    double performance;

};

#endif	/* PENSION_H */

