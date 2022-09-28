#include <iostream>
#include "tokenizer.h"
#include "token.h"

string Token::getToken(char c)  //when reading c, form tokens.
{
    switch (c) {
        case '(': case ')': case '{': case '}': case ';': case ',':
            return TOKEN(c);
    }
}
/*
string Token::getToken(char c)  //when reading c, form tokens.
    case '(':
        setOpenBrace(c);
    case ')':
        setCloseBrace(c);
    case '{':
        setOpenBracket(c);
    case '}':
        setCloseBracket(c);
    case ';':
        setIsColon(c);
    case ',':
        setIsComma(c);
    */