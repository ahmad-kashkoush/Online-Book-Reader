//In this file I'll be adding
// 1. macros
// 2. utilityFunctions
#ifndef ONLINEBOOKREADER_UTILITIEFUNCTIONS_H
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
using namespace std;
class Utility {

public:
    static int ReadMenuOption(int, int);
    static int ShowMenu(const vector<string> &);
    static int ShowRegestrationMenu();
    static int ShowUserViewMenu();
    static int ShowAdminViewMenu();
    static int ShowSessionMenu();
};
#define ONLINEBOOKREADER_UTILITIEFUNCTIONS_H


#endif //ONLINEBOOKREADER_UTILITIEFUNCTIONS_H
