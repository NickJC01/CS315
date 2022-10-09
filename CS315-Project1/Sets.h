//
// Created by nchaudoir on 10/5/22.
//

#ifndef PROJECT1_SETS_H
#define PROJECT1_SETS_H
#include <iostream>
#include <vector>
#include "Instance.h"

class Set {
public:
    Set();
    void addInstance(Instance); // Function to add a new instance (user)
    Instance& at(int); // Function to retrieve the location of a user in the instances vector
    int size(); // Function to return the size of the set
    void print(); // Function to print the set
private:
    std::vector<Instance> instances;
};

#endif PROJECT1_SETS_H
