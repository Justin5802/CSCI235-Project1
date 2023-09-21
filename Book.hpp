//Name: Justin Bret Chu
//Email: JUSTIN.CHU73@myhunter.cuny.edu
//Date: February 10th, 2023
//This program implements the book class, and acts as a review for object oriented programming
//Project 1

#include <iostream>
#include <string>

class Book{
    public:
    //@pre default constructor/parameterized constructor
    //@param: title of the book (a string), author of the book (a string), number of pages in book (positive int), flag indicating whether book is available in digital form or not (a boolean) set to false
      Book();
      Book(const std::string& name, const std::string& author, const int& page_count, const bool& flag = false);
      void setTitle(const std::string& name);
      void setAuthor(const std::string &author);
      void setPageCount(const int &page_count);
      void setDigital();
      std::string getTitle() const;
      std::string getAuthor() const;
      int getPageCount() const;
      bool isDigital() const;
    //@post sets functions to be used in source/main source file
        
    private:
    //@pre sets private variables
      std::string name_;
      std::string author_;
      int page_count_;
      bool flag_;
    //@post to be used for return values for mutator functions for Book.cpp
};