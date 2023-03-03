//
// Created by ahmed-kashkoush on 3/2/23.
//

#ifndef ONLINEBOOKREADER_BOOK_H
#define ONLINEBOOKREADER_BOOK_H
#include "UtilitieFunctions.h"
class Book{
private:
    string ISBN, Title;
    vector<string> Pages;
    bool validPageNumber(int i)const;
    void EnterPagesContent(int i);
public:
    Book();
    Book(const string&, const string &, int );
    void EnterBookInformation(const string &);
    void PrintPageContent(int i)const;
    const string &GetIspbn()const;
    const string &GetTitle()const;
    const vector<string> &GetPagesContent()const;
    int GetTotalNumberOfPages()const;
    const string &GetPageContent(int i)const;
   void  SetIspbn(const string &);
   void  SetTitle(const string &);
   void  SetPagesContent(const vector<string> &);
   void  SetPageContent(int , const string &);



};
#endif //ONLINEBOOKREADER_BOOK_H
