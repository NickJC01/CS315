#include <iostream>
#include <fstream>
#include <vector>
#include "Token.h"
#include "Tokenizer.h"
#include "Pair.h"

using namespace std;

int main(int argc, char* argv[])
{
    vector<Token> TVector;
    Tokenizer tokenizer("input.json");
    tokenizer.readfile(TVector);


    return EXIT_SUCCESS;
}