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
    // date
public:
    string BookName;
    int curPage;
    int Total;
    string Date;
    Session(const string &a, int cur, int total):BookName(a),curPage(cur),Total(total){}
    void Print(){
        cout<<BookName<<" Current Page:"<<curPage<<"/"<<Total<<" "<<Date<<el;
    }
    void PrintCur(){
        cout<<curPage<<"/"<<Total;
    }
    Session(){}
};
class BookManager{
private:
    map<string, Book> NameToBook;
    map<string, vector<Session>> UsernameToSession;

    void AddSomeBooksTmp();
public:
    BookManager();
    void AddBook();
    int PrintBooks();
    void ReadBook(const string &);
    void ReadBookFromSession(const string &);
    Session OpenSession( Session );
};
#endif //ONLINEBOOKREADER_BOOKMANAGER_H
