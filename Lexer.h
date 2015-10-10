//
// Created by joshu on 10/10/2015.
//

#ifndef QCL_VIRTUALMACHINE_LEXER_H
#define QCL_VIRTUALMACHINE_LEXER_H

#include <vector>
#include <iostream>
#include <array>
#include <vector>


class Lexer {
public:
    Lexer();

    enum TokenType {
        QTEQ = 0,
        LTEQ,
        GT,
        LT,
        ARROW,
        PLUS,
        MINUS,
        STAR,
        SLASH,
        ASSIGN,
        LPAR,
        RPAR,
        SEMI,
        COMMA,
        IF,
        DEF,
        ELSE,
        FI,
        WHILE,
        IDENT,
        NUMERAL,
        NEOF,
        ERROR,
    };

    std::string getLex(TokenType tokenType) { return res_map[tokenType]; }

    std::string lastLex;

    TokenType nextToken();

private:
    std::vector<std::string> res_map;
};

#endif //QCL_VIRTUALMACHINE_LEXER_H
