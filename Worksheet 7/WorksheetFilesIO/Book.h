//
// Created by bhagy on 09/12/2021.
//

#ifndef WORKSHEETFILESIO_BOOK_H
#define WORKSHEETFILESIO_BOOK_H

using namespace std;
#include <string>
#include <fstream>
class Book {
private:
    string author;
    string title;
    int isbn;
public:

    Book();
    ~Book();

    void readBook(ifstream& myFile);
    void readBookDelim(ifstream& myFile);
    void writeBook(ofstream& file, Book b);

};


#endif //WORKSHEETFILESIO_BOOK_H
