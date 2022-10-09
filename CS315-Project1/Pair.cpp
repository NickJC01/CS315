//
// Created by nchaudoir on 10/5/22.
//

#include "Pair.h"
#include <iostream>
#include <utility>


using namespace std;

Pair::Pair(std::string name, std::string val) {
    att_name = name;
    att_val = val;
    has_comma = false;
}

Pair::Pair(std::string name, std::vector<std::string> values) {
    att_name = name;
    att_val = "";
    att_values = values;
    has_comma = false;
}

std::string Pair::getAttName() {
    return att_name;
}

void Pair::setAtt_Name(std::string name) {
    att_name = name;
}

std::string Pair::getAttVal() {
    return att_val;
}

void Pair::setAttVal(std::string val) {
    att_val = val;
}
std::vector<std::string> Pair::getAttValues() {
    return att_values;
}

void Pair::setAttValues(std::vector<std::string> ValueVector) {
    att_values = ValueVector;
}

void Pair::print() {
    std::cout << att_name << " : ";
    if (att_val != "") {
        cout << att_val;
    }
    else{
        for(int i = 0; i < att_values.size(); i++){
            if (i > 1) {
                has_comma = true;
            }
            cout << att_values.at(i);
        }
    }
    cout << endl;
}


