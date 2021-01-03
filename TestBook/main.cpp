#include <iostream>
#include"Book.h"
#include <string>

int main()
{
    int bookID;
    std::string bookName;
    Book *book = new Book(100,"ABC Learning");
    std::cout<<"bookID :"<<book->getBookID()<<" book's name :"<<book->getBookName()<<std::endl;
    std::cout<<"input bookID : ";
    std::cin>>bookID;
    book->setBookID(bookID);
    std::cout<<"input book's name : ";
    std::cin>>bookName;
    book->setBookName(bookName);
    std::cout<<"bookID :"<<book->getBookID()<<" book's name :"<<book->getBookName()<<std::endl;
    delete book;
    return 0;
}
