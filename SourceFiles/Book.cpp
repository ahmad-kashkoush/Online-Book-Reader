//
// Created by ahmed-kashkoush on 3/2/23.
//

#include "../HeaderFiles/Book.h"
//Getters
const string &Book::GetIspbn()const{return ISBN;}
const string &Book::GetTitle()const{return Title;}
const vector<string> &Book::GetPagesContent()const{return Pages;}
int Book::GetTotalNumberOfPages()const {return (int)Pages.size();}
const string &Book::GetPageContent(int i)const{
    if(validPageNumber(i))
        return Pages[i-1];
    string tmp;
    return tmp;
}

void Book::EnterBookInformation(const string &isbn) {
        cout<<"Enter Title:";
        string ttl;cin>>ttl;SetTitle(ttl);
        cout<<"Enter How Many Pages:";
        int i; cin>>i;
        EnterPagesContent(i);
}

bool Book::validPageNumber(int i) const{
    return (i>=1 and i<=GetTotalNumberOfPages());
}

void Book::SetIspbn(const string &a) {ISBN=a;}

void Book::SetTitle(const string &a) {Title=a;}

void Book::SetPagesContent(const vector<string> &v) {Pages=v;}

void Book::SetPageContent(int i, const string &a) {
    if(validPageNumber(i))
        Pages[i-1]=a;
}

Book::Book(const string &a, const string &b, int i)
    :ISBN(a),Title(b){

}

void Book::EnterPagesContent(int i) {
    Pages.resize(i);
    for(int j=0;j<i;j++){
        cout<<"Enter Page # "<<j+1<<": ";
        cin>>Pages[j];
    }
}

void Book::PrintPageContent(int i) const {
        string tmp= GetPageContent(i);
        if(!tmp.empty()){
            cout<<"Current Page: "<<i<<"/"<<GetTotalNumberOfPages()<<el;
            cout<<tmp;
        }
}

Book::Book() {

}

//void Book::SetBooksInfoTmp(const string &, const string &, int) {
//
//}
