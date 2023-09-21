//Name: Justin Bret Chu
//Email: JUSTIN.CHU73@myhunter.cuny.edu
//Date: February 10th, 2023
//This program implements the book class, and acts as a review for object oriented programming
//Project 1
#include <iostream>
#include <string>
#include "Book.hpp"

Book::Book(){
    //@pre initializes all private members; sets boolean value to false
    std::string name_ = "";
    std::string author_ = "";
    int page_count_ = 0;
    bool flag_ = false;
    //@post passes Test 1 for default constructor and accessors
}

Book::Book(const std::string& name, const std::string& author, const int& page_count, const bool& flag){
    //@pre parameterized constructor
    //@param: title of the book (a string), author of the book (a string), number of pages in book (positive int), flag indicating whether book is available in digital form or not (a boolean)
    name_ = name;
    author_ = author;
    if (page_count > 0){
        page_count_ = page_count;
    }
    flag_ = flag;
    //@post sets private members to the values of corresponding variables set within the parameterized constructor

}

std::string Book::getTitle() const{
    return name_;
    //@return returns private member that contains title of book
}

std::string Book::getAuthor() const{
    return author_;
    //@return returns private member that contains author of book
}

int Book::getPageCount() const{
    return page_count_;
    //@return returns private member that contains number of pages
}

bool Book::isDigital() const{
    //@pre is set up as an accessor function to determine if book is in digital form or not
    return flag_;
    //@return returns a value of 1 (true) if a book is available in digital form, or a 0 (false) if it is not
}

void Book::setTitle(const std::string& name){
    //@param: the title of the book
    name_ = name;
    //@post sets title of book to value of parameter
}

void Book::setAuthor(const std::string& author){
    //@param: the name of the author of the book
    author_ = author;
    //@post sets author of book to value of parameter
}

void Book::setPageCount(const int& page_count){
    //@pre sets up if statement that page count must be a postive integer; page count cannot be set to 0 or negative
    //@param a positive integer page count
    if (page_count > 0){
        page_count_ = page_count;
    }
    //@return if page count is more than 0, it is set to value of parameter
}

void Book::setDigital(){
    flag_ = true;
    //@post sets up digital flag to true if book is detected as available in digital form
}