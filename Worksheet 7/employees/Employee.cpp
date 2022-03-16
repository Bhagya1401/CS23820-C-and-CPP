/*
 * File:   Employee.cpp
 */
#include "Employee.h"
#include "Date.h"
#include <iostream>

int Employee ::employeesCreated = 0;

/**
 * constructor
 * @param theName
 * @param dateOfBirth
 * @param startSalary
 */
Employee::Employee(
        const std::string &theName,
        const Date &dateOfBirth,
        double startSalary)
        : name(theName), birthDate(dateOfBirth) {

    salary = startSalary;
    employeesCreated++;
    std::cout << "Employee constructor for " << name << '\n';
}

/**
 * destructor
 */
Employee::~Employee(void){
    std::cout << "Employee destructor for " << name << '\n';
}

/**
 * output details of this employee to the console
 */
void Employee::print(void) const {
    using namespace std;
    cout << "Employee: " << name << ' ';
    cout << "Birthday: ";
    birthDate.printAnniversary();
    cout << " Salary: " << salary <<endl;
}

/**
 * implement payrise!
 * @param salaryIncrease
 */
void Employee::promotion(double salaryIncrease){
    salary += salaryIncrease;
}

/**
 * salary getter
 * @return
 */
double Employee::getSalary(void) const {
    return salary;
}

int Employee::getEmployeesCreated(){
    return employeesCreated;
}

int Employee::getYear() {
    return birthDate.getYear();
}