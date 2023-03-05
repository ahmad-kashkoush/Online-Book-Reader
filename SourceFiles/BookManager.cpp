//
// Created by ahmed-kashkoush on 3/2/23.
//

#include "../HeaderFiles/BookManager.h"

void BookManager::AddBook() {
        cout<<"Enter ISBN: ";
        string isbn;cin>>isbn;
        Book bk;
        bk.EnterBookInformation(isbn);
        if(NameToBook.count(bk.GetTitle())){
            cout<<"Book already Exists...Try Again";
            AddBook();
        }else
            NameToBook[bk.GetTitle()]=bk;
}

int BookManager::PrintBooks() {
        int i=1;
        for(auto [Title, Book]:NameToBook)
            cout<<i++<<". "<<Title<<el;
        return Utility::ReadMenuOption(1, i);
}
