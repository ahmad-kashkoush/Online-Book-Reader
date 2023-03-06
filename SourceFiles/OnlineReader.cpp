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
            if(isUserAdmin) {
                Choice = Utility::ShowAdminViewMenu();
                if(Choice==1)Usr.GetCurrent().PrintProfile();
                else if(Choice==2)Bok.AddBook();
                else if(Choice==3){
                    cout << "loggin out....\n";
                    break;
                }
            }
            else{
                    Choice = Utility::ShowUserViewMenu();
                    if (Choice == 1)Usr.GetCurrent().PrintProfile();
                    else if (Choice == 2)Bok.ReadBookFromSession(Usr.GetCurrent().GetUsername());
                    else if (Choice == 3)Bok.ReadBook(Usr.GetCurrent().GetUsername());
                    else if (Choice == 4) {
                        cout << "loggin out....\n";
                        break;
                    }
            }

        }
        Run();
}
