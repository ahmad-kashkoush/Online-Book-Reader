//
// Created by ahmed-kashkoush on 3/2/23.
//

#include "../HeaderFiles/User.h"

User::User():Admin(false){};

User::User(const string &a, const string &b, const string &c, const string &d, bool ad)
:Username(a),Password(b),Name(c),Email(d), Admin(ad){}

const string &User::GetUsername() const {
    return Username;
}

const string &User::GetPassword() const {
    return Password;
}

const string &User::GetName() const {
    return Name;
}

const string &User::GetEmail() const {
    return Email;
}

void User::SetUsername(const string &a) {
    Username=a;
}

void User::SetPassword(const string &a) {
    Password=a;
}

void User::SetName(const string &a) {
    Name=a;
}

void User::SetEmail(const string &a) {
    Email=a;
}

void User::PrintProfile() const {
//    cout<<"Hello "<<GetName()<<"  |  "<<(Admin?"Admin ":"User ")<<"View";
    cout<<"Name: "<<GetName()<<el;
    cout<<"Email: "<<GetEmail()<<el;
    cout<<"User Name: "<<GetUsername()<<el;
}

void User::EnterUser(const string &usrName) {
    SetUsername(usrName);
    string tmp;
    cout<<"Enter Password: ";
    cin>>tmp;SetPassword(tmp);
    cout<<"Enter Name: ";
    cin>>tmp;SetName(tmp);
    cout<<"Enter Email: ";
    cin>>tmp;SetEmail(tmp);
}

bool User::GetStatus() const {
    return Admin;
}

void User::SayHello() const {
    cout<<"Hello "<<GetName()<<" | ";
    if(GetStatus())cout<<"Admin ";
    else           cout<<"User ";
    cout<<"view\n";
}
