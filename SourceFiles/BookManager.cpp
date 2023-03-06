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
        return Utility::ReadMenuOption(1, i-1);
}

void BookManager::AddSomeBooksTmp() {
    vector<Book> bks(3);
    bks[0]=Book("123456","C++ How To Program", 3);
    bks[1]=Book("234567", "Java How To Program", 4);
    bks[2]=Book("345678", "Python How To Program", 5);
    vector<string> v={"C++1","C++2", "C++3"};

    bks[0].SetPagesContent(v);
    v.clear();
    v=vector<string>{"Java1","Java2", "Java3", "Java4"};
    bks[1].SetPagesContent(v);
    v=vector<string>{"Python1","Python2", "Python3", "Python4", "Python5"};
    bks[2].SetPagesContent(v);
    //Add Pages content
    for(int i=0;i<3;i++)
        NameToBook[bks[i].GetTitle()]=bks[i];
}

BookManager::BookManager() {
    AddSomeBooksTmp();
}

void BookManager::ReadBook(const string &Username) {
            int Choice=PrintBooks();
            int i=1;
            Session s;
             for(auto [Title, Book]:NameToBook){
                  if(i==Choice){
                        s=Session(Title,1, Book.GetTotalNumberOfPages());
                        break;
                 }
                  i++;
             }
           UsernameToSession[Username].emplace_back(OpenSession(s));
}

Session BookManager::OpenSession(Session s) {
                  int Choice=-1;
                  while(Choice!=3){
                      cout<<"Curren Page: ";s.PrintCur();
                      cout<<el<<NameToBook[s.BookName].GetPageContent(s.curPage)<<el;
                      Choice=Utility::ShowSessionMenu();
                      if(Choice==1){
                          if(s.curPage==s.Total)
                              cout<<"Invalid Page ... Try Again\n";
                          else
                              s.curPage++;

                      }else if(Choice==2){
                          if(s.curPage==1)
                              cout<<"Invalid Page ... Try Again\n";
                          else
                              s.curPage--;
                      }
                  }
                  time_t now=time(0);
                  string dt=ctime(&now);
                  s.Date=dt;
                  return s;
}

void BookManager::ReadBookFromSession(const string &Username) {
        int j=1;
        for(auto i:UsernameToSession[Username]){
            cout<<j++<<". ";i.Print();cout<<el;
        }
        int Choice=Utility::ReadMenuOption(1, j);
        j=1;
    for(auto i:UsernameToSession[Username]){
        if(j==Choice){
            UsernameToSession[Username].emplace_back(OpenSession(i));
            break;
        }
    }
}

