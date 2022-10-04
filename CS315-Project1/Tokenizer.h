//
// Created by nchaudoir on 9/28/22.
// This file defines my tokenizer class; it prototypes the necessary functions that my tokenizer will need in order
// to actually read input files and tokenize them into a usable state.

#ifndef UNTITLED_TOKENIZER_H
#define UNTITLED_TOKENIZER_H
#include "Token.h"
#include <iostream>
#include "Token.h"
#include <fstream>
#include <vector>


using namespace std;
class Tokenizer  {
public:
    Tokenizer(string filename);
    void readfile(vector<Token>&);
    Token GetToken(char&);
    void WhiteSpace(char&);
private:
    ifstream input;
};

#endif //UNTITLED_TOKENIZER_H

// Readfile
// Get token for char
// Push token back into vector
// continue reading characters