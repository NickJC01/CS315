//
// Created by nchau on 9/27/2022.
//

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
    void setOpenBracket(bool);
    bool getOpenBracket();
    void setCloseBracket(bool);
    bool getCloseBracket();
    void setOpenBrace(bool);
    bool getOpenBrace();
    void setCloseBrace(bool);
    bool getCloseBrace();
    void setIsColon(bool);
    bool getIsColon();
    void setIsComma(bool);
    bool getIsComma();
    void setString(string);
    string getString();
    struct TOKEN;

};



#endif //CS315_PROJECT1_TOKEN_H
