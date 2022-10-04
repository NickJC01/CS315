#include <iostream>
#include <fstream>
#include <vector>
#include "Token.h"
using namespace std;

int main()
{
    string filename("input.json");
    vector<char> bytes;
    char byte = 0;

    ifstream input_file(filename);
    if (!input_file.is_open()) {
        cerr << "Could not open the file - '"
             << filename << "'" << endl;
        return EXIT_FAILURE;
    }

    while (input_file.get(byte)) {
        bytes.push_back(byte);
    }
    for (const auto &i : bytes) {
        cout << i << "-";
    }
    cout << endl;
    input_file.close();

    Token token;
    token.setCloseBracket(true);

    return EXIT_SUCCESS;
}