//
// Created by nchaudoir on 10/5/22.
//

#include "Sets.h"

Set::Set() {

}

void Set::addInstance(Instance InstanceI) {
    instances.push_back(InstanceI);
}

Instance &Set::at(int loc) {
    return instances.at(loc);
}

int Set::size() {
    return instances.size();
}

void Set::print() {
    std::cout << '[';
    for(int i = 0; i < instances.size(); i++){
        instances.at(i).print();
    }
    std::cout << ']';
    std::cout << std::endl;

}
