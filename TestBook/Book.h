#ifndef BOOK_H
#define BOOK_H
#include <string>

class Book
{
    public:
        Book();
        Book(int BookID, std::string BookName);
        int getBookID();
        void setBookID(int BookID);
        std::string getBookName();
        void setBookName(std::string BookName);

    protected:

    private:
        int BookID;
        std::string BookName;

};

#endif // BOOK_H
