/*
 * File:   Date.cpp
 */
#include "Date.h"
#include <iostream>

/*
 * constructor
 */
Date::Date(int dd, int mm, int yy) {
    day = dd;
    month = mm;
    year = yy;
}

/*
 * destructor
 */
Date::~Date() {
};

/**
 * year getter
 * @return DoB year
 */
int Date::getYear(void) const {
    return year;
}

/**
 * month getter
 * @return DoB month
 */
int Date::getMonth(void) const {
    return month;
}

/*
 * day of month getter
 */
int Date::getDay(void) const {
    return day;
}

/**
 * send only the anniversary to the console stream
 */
void Date::printAnniversary() const {
    std::cout << day << '/' << month;
}
