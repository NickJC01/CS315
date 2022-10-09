//
// Created by nchaudoir on 10/5/22.
//
#ifndef PROJECT1_INSTANCE_H
#define PROJECT1_INSTANCE_H
#include <iostream>
#include <vector>
#include "Pair.h"

class Instance {
public:
    Instance();
    void addPair(Pair); // This function adds a par to the vector of pairs (instance) that I generated
    std::string getIDStr(); // This function returns the IDStr property of an instance
    std::string getName(); // This function returns the Name property of an instance
    std::string getLocation(); // This function returns the Location property of an instance
    std::string getPicUrl(); // This function returns the PicUrl property of an instance
    std::vector<std::string> getFollows(); // This function returns a vector of whom the user follows
    Pair& at(int); // This function returns a pair at a location within an instance
    int size(); // This input returns the size of the instance
    void print(); // This function prints all pairs within an instance
private:

    std::vector<Pair> pairs; // Initializing the vector of pairs which make an instance
    bool has_comma;
};


#endif //PROJECT1_INSTANCE_H
