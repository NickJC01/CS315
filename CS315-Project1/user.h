//
// Created by nchaudoir on 10/3/22.
// This class exists to define what a user is; their properties and the functions that manipulate those properties.

#ifndef UNTITLED_USER_H
#define UNTITLED_USER_H
#include <fstream>
#include <iostream>
using namespace std;

class user {
private:
    string id_str;
    string name;
    string location;
    string pic_url;
    string follows;


public:
    void getUser(string);
    void printUser(string);

};


#endif //UNTITLED_USER_H
