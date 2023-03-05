//
// Created by ahmed-kashkoush on 3/2/23.
//

#ifndef ONLINEBOOKREADER_BOOKMANAGER_H
#define ONLINEBOOKREADER_BOOKMANAGER_H
#include "UtilitieFunctions.h"
#include "Book.h"
#include "User.h"
class Session{
private:
public:
};
class BookManager{
private:
    map<string, Book> NameToBook;
    map<string, vector<string>> UsernameToBooksNames;
    map<string, Session> BookNameToSession;
public:
    void AddBook();
    int PrintBooks();


};
#endif //ONLINEBOOKREADER_BOOKMANAGER_H
