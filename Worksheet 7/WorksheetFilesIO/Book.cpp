//
// Created by bhagy on 09/12/2021.
//

#include "Book.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
Book ::Book() {
    cout << "Book constructed" << endl;
}
Book::~Book() {
    cout << "Book destroyed" << endl;
}



void Book::readBook(ifstream& myFile) {
    string ignore;
    getline(myFile,author);
    getline(myFile, title);

    myFile >> isbn;
    getline(myFile, ignore);

    getline(myFile, ignore);
   // cout << author << " " << title << " " << isbn << '\n';
}

void Book::writeBook(ofstream& myFile ,Book b){
    myFile << b.author << ";" << b.title << ";" << b.isbn << ";";

}

void Book::readBookDelim(ifstream& myFile) {
    string ignore;

    getline(myFile,author,';');
    getline(myFile, title,';');

    myFile >>isbn;
    getline(myFile, ignore,';');

    // cout << author << " " << title << " " << isbn << '\n';
}