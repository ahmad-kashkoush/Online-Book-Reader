//
// Created by ahmed-kashkoush on 3/2/23.
//

#include "../HeaderFiles/UserManager.h"

void UserManager::AccessSystem() {
    int Choice=Utility::ShowRegestrationMenu();
    if(Choice==1)Login();
    else        Signup();
    Current.SayHello();
}

User UserManager::GetCurrent() {
    return Current;
}

void UserManager::Login() {
        cout<<"Enter Username: ";
        string username;cin>>username;
        cout<<"Enter Password ";
        string password; cin>>password;
        if(!UsernameToUser.count(username)){
            cout<<"Invalid Username or Password Please Try Again\n";
            Login();
        }else if(UsernameToUser[username].GetPassword()!=password){
            cout<<"Invalid Username or Password Please Try Again\n";
            Login();
        }else{
            Current=UsernameToUser[username];
        }
}

void UserManager::Signup() {
        cout<<"Enter Username: ";
        string username;cin>>username;
        if(UsernameToUser.count(username)){
            cout<<"Username already exists try Again\n";
            Signup();
        }else{
            Current.EnterUser(username);
            Users.emplace_back(Current);
            UsernameToUser[username]=Current;
        }
}


