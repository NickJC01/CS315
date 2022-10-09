#include <iostream>
#include "Tokenizer.h"
#include "Token.h"
#include <fstream>
#include <iostream>

using namespace std;

Tokenizer::Tokenizer(string filename) {
    input.open(filename);
}

    void Tokenizer::readfile(vector<Token> &TokenVector) {
        char ch;
        char r;
        while (input >> noskipws >> ch) {
            Token x = GetToken(ch);
            TokenVector.push_back(x);

            x = GetToken(r);
        }

    }

    Token Tokenizer::GetToken(char &ch) {
        Token x;
        switch (ch) {
            default:
                break;
            case '[':
                x.setOpenBracket(true);
                return x;
            case ']':
                x.setCloseBracket(true);
                return x;
            case '{':
                x.setOpenBrace(true);
                return x;
            case '}':
                x.setCloseBrace(true);
                return x;
            case ':':
                x.setIsColon(true);
                return x;
            case ',':
                x.setIsComma(true);
                return x;
            case '"':
                string name;
                input >> ch;
                while (ch != '"') {
                    name += ch;
                    input >> ch;
                }
                if (name == "users")
                    break;
                x.setString(name);
                return x;

        }
    }
