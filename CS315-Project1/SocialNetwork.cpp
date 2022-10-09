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

    for (int i = 0; i < tokens.size();) {
        Token x = tokens.at(i);
        if (tokens.at(i).getOpenBracket()) {
            Set NewSet;
            TempSet = NewSet;
        }
        if (tokens.at(i).getOpenBrace()) {
            Instance NewInstance;
            TempInstance = NewInstance;
        }
        if (tokens.at(i).getCloseBracket()) {
            SocialNet = TempSet;
        }
        if (tokens.at(i).getString() != "") {
            TempString = tokens.at(i).getString();
            i++;
            if (tokens.at(i).getIsColon()) {
                i++;
            }
            if (tokens.at(i).getString() != "") {
                Pair inPair(TempString, tokens.at(i).getString());
                TempInstance.addPair(inPair);
            }
            if (tokens.at(i).getOpenBracket()){
                vector<std::string> sVector;
                while(!tokens.at(i).getCloseBracket()) {
                    i++;
                    sVector.push_back(tokens.at(i).getString());
                }
                Pair inPair(TempString, sVector);
                TempInstance.addPair(inPair);
            }
            if (tokens.at(i).getIsComma()) {

            }
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
