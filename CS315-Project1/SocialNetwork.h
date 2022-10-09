//
// Created by nchaudoir on 10/4/22.
//

#ifndef PROJECT1_SOCIALNETWORK_H
#define PROJECT1_SOCIALNETWORK_H
#include <iostream>
#include <vector>
#include "Token.h"
#include "Sets.h"
#include "Instance.h"
#include "Pair.h"
#include "Tokenizer.h"

// This class will store user data and output HTML files for my Index and User pages

class SocialNetwork {
public:
    SocialNetwork(); // Default Network Constructor
    void parseTokens(vector<Token>); // This function will parse tokens into usable pairs/sets/instances for output
    void printJson(); // This function prints raw JSON input
    void printIndex(); //This function prints an index HTML of all users
    void printUser(); // This function will print an html file for a single user
    int following(); // This function will return who a user is following
    int followers(); // This function will print who is following a user
    int mutual(); // This function will print a mutual follow if the user and another user are following each other
private:
    Set SocialNet; // Initializing a set which the parser will add users to for printing the index
    std::vector<std::vector<bool>> FollowerMatrix; // This is the 2d matrix where we will record followers
};


#endif //PROJECT1_SOCIALNETWORK_H
