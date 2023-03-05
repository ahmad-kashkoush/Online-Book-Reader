//
// Created by ahmed-kashkoush on 3/2/23.
//

#ifndef ONLINEBOOKREADER_USER_H
#define ONLINEBOOKREADER_USER_H
#include "UtilitieFunctions.h"
class User{
private:
    string Username, Password,
    Name, Email;
    bool Admin;
public:
    User();
    User(const string&, const string&, const string&, const string&, bool );
    // Getters and setters
    const string &GetUsername()const;
    const string &GetPassword()const;
    const string &GetName()const;
    const string &GetEmail()const;
    bool GetStatus()const;
    void SetUsername(const string&);
    void SetPassword(const string&);
    void SetName(const string&);
    void SetEmail(const string&);

    // functions used By UserManager
    void PrintProfile()const;
    void EnterUser(const string &);
    void SayHello()const;


};
#endif //ONLINEBOOKREADER_USER_H
