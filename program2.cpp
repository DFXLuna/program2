// Matt Grant
// Program 2
// 14 Sep 2017
#include<iostream>
#include<string>
#include<FlexLexer.h>
#include"messenger.hpp"
using namespace std;
Messenger* messenger = new Messenger();
const int END = 0;

void printRow();


int main(int argc, char* argv[]){
    //Flex hooks up to stdio by default
    yyFlexLexer f;
    int ret;
    // Not sure if this belongs here
    int errCount = 0;
    
    cout << "Line\tColumn\tToken\tLength\tValue" << endl;
    while((ret = f.yylex()) != END){
        if(ret < 90 && ret > 0){
            messenger->print();
        }
        else if(ret == 90){
            errCount++;
            if(errCount > 20){
                cout << "Too many errors" << endl;
                return -1;
            }
        }
    }
    

    return 0;
}

