
#include <string>
#include <iostream>
#include <fstream>
#include "Book.h"

// references
// http://www.cplusplus.com/doc/tutorial/files/

/**
 * an example function to write a file
 * using C++ streams and insertion operators
 */
void writeFileTest() {

    std::ofstream myfile;
    myfile.open("../example.txt");

    myfile << "Writing this to a file.\n";

    myfile.close();
}

/**
 * an example function to read a file
 * using C++ streams and extraction operators
 */
void readFileTest() {
    std::ifstream myfile_in;

    myfile_in.open("../biblio.txt");

    if (myfile_in.is_open()) {
        std::cout << "File opened" << std::endl;

        std::string author;
        std::string title;
        int isbn;
        std::string ignore;

        while (myfile_in.good()) {

            std::getline(myfile_in, author); //http://www.cplusplus.com/reference/string/string/
            std::getline(myfile_in, title);

            myfile_in >> isbn;
            std::getline(myfile_in, ignore);

            std::getline(myfile_in, ignore);

            std::cout << author << " " << title << " " << isbn << '\n';
        }
    } else {
        std::cout << "Unable to open file" << std::endl;
    }

    myfile_in.close();
}
/*
int main() {


    std::cout << "Simple example to write a file in C++" << std::endl;
    writeFileTest();
    std::cout << "File written" << '\n' << std::endl;

    std::cout << "Simple example to read the 'biblio.txt' file in C++" << std::endl;
    readFileTest();
    std::cout << "File read" << std::endl;


    std::cout << "Finished!" << std::endl;


    ifstream myFile;
    myFile.open("../biblio.txt");
    Book books[11];
    int i = 0;


    if (myFile.is_open()) {
        while (myFile.good()){
            Book book;
            book.readBook(myFile);
            books[i] = book;
            i++;
        }
    }
    else {
        std::cout << "Unable to open file" << std::endl;
    }

    myFile.close();


    ofstream outFile;
    outFile.open("../newBiblio.txt");
    for (int j = 0; j < 11; ++j) {
        Book book;
        book.writeBook(outFile,books[j]);
    }
    outFile.close();



    return 0;
}
*/



#include <vector>
int main() {




    std::cout << "Vector of Books program" << std::endl;
// create a vector containing 3 books created using the explicit default constructor
    std::vector<Book> booklist(0, Book());

    ifstream myFile;
    myFile.open("../newBiblio.txt");


    if (myFile.is_open()) {
        while (myFile.good()){
            Book book;
           // book.readBook(myFile);
            book.readBookDelim(myFile);
            booklist.push_back(book);
        }
    }
    else {
        std::cout << "Unable to open file" << std::endl;
    }

    myFile.close();


   // booklist.push_back();
   /*
    // add more to the end of the vector
    booklist.push_back(Book());
    booklist.push_back(Book());
// remove one book from the vector
    booklist.pop_back();
//using an iterator to access elements
    std::cout << "---Here are the books---" << std::endl;
    std::vector<Book>::const_iterator it;
    for (it = booklist.begin(); it != booklist.end(); ++it)
  //      it->print();
// get the 4th book
    std::cout << "the 4th book is: " << std::endl;
 //   booklist[3].print();
// the size (current number of elements)
    std::cout << "\nSize: " << booklist.size() << std::endl;
// the capacity (amount of space currently allocated by the vector)
    std::cout << "Capacity: " << booklist.capacity() << std::endl;

    */
    return 0;
}


