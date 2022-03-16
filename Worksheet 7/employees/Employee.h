/* 
 * File:   Employee.h
 */

#ifndef EMPLOYEE_H
#define	EMPLOYEE_H

#include <string>
#include "Date.h"

class Employee
{
public:
    // constructor
    Employee(const std::string &, const Date &, double startSalary=0);

    // destructor
    ~Employee(void);

    // output objcet details to console
    void print(void) const;

    // increase salary by the amount specified by the parameter
    void promotion(double);

    // getter for the salary
    double getSalary(void) const;

    static int getEmployeesCreated();

    friend class Pension;
    
private:
    std::string name;
    const Date birthDate;
    double salary;
    static int employeesCreated;
};

#endif	/* EMPLOYEE_H */

