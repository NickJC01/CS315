#include <iostream>
#include "Tokenizer.h"
#include "Token.h"
#include <fstream>
#include <iostream>

using namespace std;


Tokenizer::Tokenizer(std::string filename) {
    char ch;

    fstream fin(filename, fstream::in);
    while (fin >> noskipws >> ch) {
        GetToken(ch);
    }
}

void Tokenizer::readfile(vector<Token> &) {

}

Token Tokenizer::GetToken(char &) {
    return Token();
}

void Tokenizer::WhiteSpace(char &) {

}
