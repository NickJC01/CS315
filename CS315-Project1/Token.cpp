

//
// Created by nchau on 9/27/2022.
//

#include "Token.h"

Token::Token() {

}

void Token::setOpenBracket(bool x) {
    open_Bracket = x;
}

bool Token::getOpenBracket() {
    return open_Bracket;
}

void Token::setCloseBracket(bool x) {
    close_Bracket = x;
}

bool Token::getCloseBracket() {
    return close_Bracket;
}

void Token::setOpenBrace(bool x) {
    open_Brace = x;
}

bool Token::getOpenBrace() {
    return open_Brace;
}

void Token::setCloseBrace(bool x) {
    close_Brace = x;
}

bool Token::getCloseBrace() {
    return close_Brace;
}

void Token::setIsColon(bool x) {
    is_colon = x;
}

bool Token::getIsColon() {
    return is_colon;
}

void Token::setIsComma(bool x) {
    is_comma = x;
}

bool Token::getIsComma() {
    return is_comma;
}

void Token::setString(string x) {
    name = x;
}

string Token::getString() {
    return name;
}



