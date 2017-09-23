// Matt Grant
// Program 2
// 14 Sep 2017
#ifndef MESSENGER_H
#define MESSENGER_H
#include<string>
#include<iostream>
using namespace std;
// This looks bad but it makes sense to have all the pieces of the language
// definition in the same place
extern const string keywords[11];

enum Token{
    KEYWORD,
    IDENTIFIER,
    NUMBER,
    OPERATOR,
    ERR
};

class Messenger{
private:
    int line;
    int col;
    bool keyword();
    Token token;
    string value;
    string error;
public:
    // Not sure this belongs here but it doesn't really fit anywhere else
    // Looks at current value and sets token to either keyword or word
    void isKeyword();
    void set(int l, int c, string v, Token t);
    void set(int l, int c, char* v, Token t);
    void setError(string e);
    void print();
    void printError();
};

#endif