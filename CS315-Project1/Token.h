//
// Created by nchau on 9/27/2022.
// This file defines my token class; the necessary functions for manipulating tokens as well as the type definitions.
#ifndef CS315_PROJECT1_TOKEN_H
#define CS315_PROJECT1_TOKEN_H
#include <iostream>
#include <string>
using namespace std;

class Token {
private:
    bool open_Bracket;
    bool close_Bracket;
    bool open_Brace;
    bool close_Brace;
    bool is_colon;
    bool is_comma;
    string name;

public: Token();
    void setOpenBracket(bool); // Set a token as OpenBracket
    bool getOpenBracket(); // Return OpenBracket
    void setCloseBracket(bool); // Set a token as CloseBracket
    bool getCloseBracket(); // return CloseBracket
    void setOpenBrace(bool); // Set a token as OpenBrace
    bool getOpenBrace(); // return OpenBrace
    void setCloseBrace(bool); // Set a token as CloseBrace
    bool getCloseBrace(); // return CloseBrace
    void setIsColon(bool); // Set a token as IsColon
    bool getIsColon(); // return IsColon
    void setIsComma(bool); // Set a token as IsComma
    bool getIsComma(); // return IsComma
    void setString(string); // Set a token as String
    string getString(); // return String
    void print(); // Print the symbol corresponding with the token created (token testing)



};



#endif //CS315_PROJECT1_TOKEN_H