/* 
 * File:   main.cpp
 *
 * to test the Employee and Date classes
 */

#include <cstdlib>
#include "Employee.h"
#include "Date.h"
#include "Pension.h"
#include <iostream>

using namespace std;

void useEmployee(Employee const * emp){
    emp->print();
    //emp->promotion(100); //we can't do this...good!
    cout << "Salary is: " << emp->getSalary() << '\n';
}

/*
 * 
 */
int main(int argc, char** argv) {
    Date d;
    Employee emp("Neal", d);
    emp.print();

    cout << "\nsizeof(Date) is " << sizeof(Date) <<
            " sizeof(Employee) is " << ' ' << sizeof(Employee) << endl;

    cout << "\nPromotion !" << endl;
    emp.promotion(1000.00);
    emp.print();
    
    // create Employee object
    cout << endl << endl;
    Employee * myEmployee = new Employee("Joe", Date(25,3,1983), 18000.00); //adds to heap

    //make one that can't be changed
    Employee const * ce = myEmployee;
    // can only give ce to functions that accept const objects
    useEmployee(ce);

    cout << endl << "ALL DONE" << endl;
    cout << endl << "We have " << Employee::getEmployeesCreated() << " employee objects" << endl;

    Pension pensionScheme("Super Pension", 0.24);
    pensionScheme.print();
    cout << "Benefits " << pensionScheme.calculateBenefits(*myEmployee, 120.0) << endl;

    cout << "Benefits " << pensionScheme.calculateBenefits(const_cast<Employee &>(*ce), 120) << endl;
    return 0;
}



