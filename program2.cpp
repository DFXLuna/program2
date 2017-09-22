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


void printHeading();
void printRow();


int main(int argc, char* argv[]){
    //Flex hooks up to stdio by default
    yyFlexLexer f;
    int ret;
    
    cout << "Line\tColumn\tType\tLength\tValue" << endl;
    while((ret = f.yylex()) != END){
        if(ret < 90){
            printRow();
        }
    }
    

    return 0;
}

void printRow(){
    cout << messenger->line        << "\t"
         << messenger->col         << "\t"
         << (int) messenger->token << "\t"
         << messenger->length      << "\t"
         << messenger->value       << endl;
}
