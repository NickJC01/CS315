//
// Created by nchaudoir on 10/4/22.
//

#include "SocialNetwork.h"
#include <iostream>
#include <vector>
#include "Token.h"
#include "Sets.h"
#include "Instance.h"
#include "Pair.h"
#include "Tokenizer.h"


SocialNetwork::SocialNetwork() {

}

void SocialNetwork::parseTokens(vector<Token> tokens) {
    Set TempSet;
    Instance TempInstance;
    std::string TempString;

    for(int i = 0; i < tokens.size();){
        Token x = tokens.at(i);
        if (tokens.at(i).getOpenBracket()){
            Set NewSet;
            TempSet = NewSet;
        }
        if (tokens.at(i).getOpenBrace()){
            Instance NewInstance;
            TempInstance = NewInstance;
        }
        if (x.getCloseBracket()){
            SocialNet = TempSet;
        }

    }
}

void SocialNetwork::printJson() {

}

void SocialNetwork::printIndex() {

}

void SocialNetwork::printUser() {

}

int SocialNetwork::following() {
    return 0;
}

int SocialNetwork::followers() {
    return 0;
}

int SocialNetwork::mutual() {
    return 0;
}
