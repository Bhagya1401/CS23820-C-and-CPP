/* 
 * File:   Date.h
 *
 * minimal class to represent a date
 */

#ifndef DATE_H
#define	DATE_H

class Date
{
public:
    static const int monthsPerYear = 12;

    // defaulting constructor
    Date(int=1, int=1, int=1900);

    //destructor
    ~Date();

    // send anniversary to console output
    void printAnniversary() const;

    // getters
    int getYear(void) const;
    int getMonth(void) const;
    int getDay(void) const;
    
private:
    int month;
    int day;
    int year;
};

#endif	/* DATE_H */

