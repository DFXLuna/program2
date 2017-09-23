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

void Messenger::set(int l, int c, char* v, Token t){
    line = l;
    col = c;
    token = t;
    value = v;
}

void Messenger::set(int l, int c, string v, Token t){
    line = l;
    col = c;
    token = t;
    value = v;
}

void Messenger::setError(string e){
    error = e;
}

void Messenger::print(){
    // A little strange but I'm assuming you want token to print the token and
    // Value to print the value parsed, which is the same for anything the
    // value would be printed for.
    cout << line        << "\t"
         << col         << "\t"
         << value       << "\t";
    if(token == IDENTIFIER ||
       token == NUMBER     ){
        cout << value;
    }
    else if(token == ERR){
        printError();
    }
    cout << endl;
}

void Messenger::printError(){
    cout << "Error on token " << value;
}