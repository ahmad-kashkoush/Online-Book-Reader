//
// Created by ahmed-kashkoush on 3/2/23.
//

#ifndef ONLINEBOOKREADER_ONLINEREADER_H
#define ONLINEBOOKREADER_ONLINEREADER_H
#include "UtilitieFunctions.h"
#include "Book.h"
#include "User.h"
#include "BookManager.h"
#include "UserManager.h"
class OnlineReader{
private:
    UserManager Usr;
    BookManager Bok;
public:
    void Run();

};
#endif //ONLINEBOOKREADER_ONLINEREADER_H
