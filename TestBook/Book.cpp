#include "Book.h"
#include <string>

Book::Book()
{

}

Book::Book(int BookID, std::string BookName){
    this->BookID = BookID;
    this->BookName = BookName;
}

int Book::getBookID(){
    return this->BookID;
}

void Book::setBookID(int BookID){
    this->BookID = BookID;
}

std::string Book::getBookName(){
    return this->BookName;
}

void Book::setBookName(std::string BookName){
    this->BookName = BookName;
}
