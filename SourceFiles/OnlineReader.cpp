//
// Created by ahmed-kashkoush on 3/2/23.
//

#include "../HeaderFiles/OnlineReader.h"

void OnlineReader::Run() {
        Usr.AccessSystem();
        // Admin or not
        bool isUserAdmin=Usr.GetCurrent().GetStatus();
        int Choice;
        while(true){
            if(isUserAdmin)
                Choice=Utility::ShowAdminViewMenu();
            else
                Choice=Utility::ShowUserViewMenu();
            if(Choice==1)Usr.GetCurrent().PrintProfile();
            else if(Choice==2);//lablabla
            else if(Choice==3)Bok.PrintBooks();
            else if(Choice==4){
                cout<<"loggin out....\n";
                Choice=Utility::ShowRegestrationMenu();
            }

        }
}