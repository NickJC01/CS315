//
// Created by nchaudoir on 10/5/22.
//

#include "Instance.h"

Instance::Instance() {

}

void Instance::addPair(Pair inPair) {
    pairs.push_back(inPair);
}

std::string Instance::getIDStr() {
    for(int i = 0; i < pairs.size(); i++){
        if(pairs.at(i).getAttName() == "id_str"){
            return pairs.at(i).getAttVal();
        }
    }
    return "" ;
}

std::string Instance::getName() {
    for(int i = 0; i < pairs.size(); i++){
        if(pairs.at(i).getAttName() == "name"){
            return pairs.at(i).getAttVal();
        }
    }
    return "" ;
}

std::string Instance::getLocation() {
    for(int i = 0; i < pairs.size(); i++){
        if(pairs.at(i).getAttName() == "location"){
            return pairs.at(i).getAttVal();
        }
    }
    return "" ;
}

std::string Instance::getPicUrl() {
    for(int i = 0; i < pairs.size(); i++){
        if(pairs.at(i).getAttName() == "pic_url"){
            return pairs.at(i).getAttVal();
        }
    }
    return "" ;
}

std::vector<std::string> Instance::getFollows() {
    for(int i = 0; i < pairs.size(); i++){
        if(pairs.at(i).getAttName() == "follows"){
            return pairs.at(i).getAttValues();
        }
    }
    std::vector<std::string> empty;
    return empty;
}

void Instance::print() {
    std::cout << '{' << std::endl;
    for(int i = 0; i < pairs.size(); i++){
        pairs.at(i).print();
    }
    std::cout << '}';
    if(has_comma) {
        std::cout << ',';
    }
    std::cout << std::endl;
}

Pair &Instance::at(int loc) {
    return pairs.at(loc);
}

int Instance::size() {
    return pairs.size();
}
