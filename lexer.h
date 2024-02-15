//
// Created by emil9 on 2024-02-15.
//

#ifndef LAB1PROGTEORIV2_LEXER_H
#define LAB1PROGTEORIV2_LEXER_H


#include <string>
#include <vector>

using it = std::string::iterator;


class lexer {
public:
    enum tokenType{
        OPENPARA,CLOSEDPARA, DIGIT, LETTER,
        PLUS, MULTI, OPENSEAGULL, CLOSEDSEAGULL, END, CHAR, WORD
    };
    static int token;

    static char checkToken(it& first, it last){
        if(first==last){
            token = END;
            return ' ';

        }
        if(std::isdigit(*first)){
            token = DIGIT;
            return *first++;
        }
        if(std::isalpha(*first)){
            token = LETTER;
            return *first++;
        }
        switch(*first){
            case '(':
                token = OPENPARA;
                return *first;
            case ')':
                token = CLOSEDPARA;
                return *first;
            case '{':
                token = OPENSEAGULL;
                return *first;
            case '}':
                token = CLOSEDSEAGULL;
                return *first;
            case '+':
                token = PLUS;
                return *first;
            case '*':
                token = MULTI;
                return *first;

        }
        //return *first++;
    };

private:

    void nextToken();


};





#endif //LAB1PROGTEORIV2_LEXER_H
