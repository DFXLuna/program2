#include"messenger.hpp"

void Messenger::isKeyword(){
    for(auto k : keywords){
        if(value == k){
            token = KEYWORD;
            return;
        }
    }
    token = IDENTIFIER;
}