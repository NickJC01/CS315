//
// Created by nchaudoir on 10/5/22.
//

#ifndef PROJECT1_PAIR_H
#define PROJECT1_PAIR_H
#include <iostream>
#include <utility>
#include <vector>

class Pair {


public:
    Pair(std::string, std::string); // Define a base key pair with a string as it's property
    Pair(std::string, std::vector<std::string>); // Define a key pair taking a vector of strings as its property (follows)
    std::string getAttName(); // get attribute name from a key pair
    void setAtt_Name(std::string); // set attribute name from a key pair
    std::string getAttVal(); // retrieve the attribute value from key pair
    void setAttVal(std::string); // set the attribute value from key pair
    std::vector<std::string> getAttValues(); // retrieve the attribute values from the vector of values (follows)
    void setAttValues(std::vector<std::string>); // set the attribute values in the vector of values (follows)
    void print(); // print a pair

private:
    std::string att_name;
    std::string att_val;
    std::vector<std::string> att_values;
    bool has_comma;
};


#endif //PROJECT1_PAIR_H
