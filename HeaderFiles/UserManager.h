//
// Created by ahmed-kashkoush on 3/2/23.
//

#ifndef ONLINEBOOKREADER_USERMANAGER_H
#define ONLINEBOOKREADER_USERMANAGER_H
#include "UtilitieFunctions.h"
#include "Book.h"
#include "User.h"
class UserManager{
private:
    vector<User> Users;
    User Current;
    map<string, User> UsernameToUser;
    void Login();
    void Signup();

public:

    void AccessSystem();
    User GetCurrent();



};
#endif //ONLINEBOOKREADER_USERMANAGER_H
