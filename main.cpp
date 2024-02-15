#include <iostream>
#include "lexer.h"

int main() {

    std::string test =  "h1llo";
    auto first = test.begin();
    auto last = test.end();


    std::vector<lexer::tokenType> tokens;
    static int a = 0;
        while( first !=last){

            lexer::checkToken(first,last);
            tokens.push_back(lexer::tokenType(lexer::token));

        }

        for(int i = 0; i < tokens.size();i++){
            std::cout << tokens[i] << std::endl;
        }


    /*switch(lexer::token){
        case lexer::LETTER:
            std::cout << "LETTER";
            tokens.push_back(lexer::tokenType());
            break;

        case lexer::DIGIT:
            std::cout << "DIGIT";
            break;
        case lexer::OPENPARA:
            std::cout << "(";
            break;
        case lexer::CLOSEDPARA:
            std::cout << ")";
            break;
        case lexer::END:
            std::cout <<" ";
            break;
    }*/


    return 0;
}
