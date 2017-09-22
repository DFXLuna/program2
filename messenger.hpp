// Matt Grant
// Program 2
// 14 Sep 2017
#ifndef MESSENGER_H
#define MESSENGER_H
#include<string>
using std::string;
// This looks bad but it makes sense to have all the pieces of the language
// definition in the same place
extern const string keywords[11];

enum Token{
    KEYWORD,
    IDENTIFIER,
    NUMBER,
    OPERATOR
};

class Messenger{
private:

public:
    int line;
    int col;
    Token token;
    int length;
    string value;
    // Not sure this belongs here but it doesn't really fit anywhere else
    // Looks at current value and sets token to either keyword or word
    void isKeyword();

};

#endif