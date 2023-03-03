//
// Created by ahmed-kashkoush on 3/2/23.
//

#include "../HeaderFiles/UtilitieFunctions.h"
/*
 I can Use this function by typing the following in any program file
 Utility::ShowMenu({
   option1
 , option2
 , option3
 , option4});
 Or passing vector of string as parameter
 */
int Utility::ShowMenu(const vector<string> &Menu) {
    cout<<"Menu: "<<el;
    for(int i=0;i<Menu.size();i++)
        cout<<"\t"<<i+1<<"."<<Menu[i]<<el;
    return ReadMenuOption(1, (int)Menu.size());
}
int Utility::ReadMenuOption(int Begin, int End) {
    int choice;
    bool NotValid;
    do {
        cout << "Enter Number In Range " << Begin << " - " << End << ":";
        cin >> choice;
        NotValid= (choice<Begin or choice >End);
        if(NotValid)cout<<"Invalid Choice ...Try Again\n";

    }while(NotValid);
    return choice;
}

int Utility::ShowRegestrationMenu() {
   return ShowMenu({"Login", "SignUp"});
}

int Utility::ShowUserViewMenu() {
    return ShowMenu({
        "View Profile",
        "My Reading History",
        "Available Books",
        "Logout"
    });
}

int Utility::ShowAdminViewMenu() {
    return ShowMenu({"View Profile","Add Book","Logout"});
}

int Utility::ShowSessionMenu() {
    return ShowMenu({"Next Page", "Previous Page", "Stop Reading"});
}
