//
// Created by joshu on 10/10/2015.
//

#include "Lexer.h"
#include <regex>

Lexer::Lexer() {
    res_map.push_back(">=");
    res_map.push_back("<=");
    res_map.push_back(">");
    res_map.push_back("<");
    res_map.push_back("=>");
    res_map.push_back("+");
    res_map.push_back("-");
    res_map.push_back("*");
    res_map.push_back("/");
    res_map.push_back("=");
    res_map.push_back("(");
    res_map.push_back(")");
    res_map.push_back(";");
    res_map.push_back(",");
    res_map.push_back("if");
    res_map.push_back("def");
    res_map.push_back("else");
    res_map.push_back("fi");
    res_map.push_back("while");
    res_map.push_back("");
    res_map.push_back("");
    res_map.push_back("");
    res_map.push_back("");
}

int i = 0;

Lexer::TokenType Lexer::nextToken() {
    std::string inp;
    std::getline(std::cin, inp);

    try {
        //TODO URGENT Fix regex.......
        std::regex r(R"(>=|<=|-->|(if)|[def]|else|fi|while)", std::regex_constants::basic);//("(\\s+|#.*)|>=|<=|-->|if|def|else|fi|while|([a-zA-Z][a-zA-Z0-9]*)|(\\d+)|.");
        std::smatch result;
        std::regex_match(inp, result, r);


        std::cerr << *result.begin() << std::endl;

    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    TokenType t;
    t = NEOF;
    switch (i) {
        case 0:
            t = LT;
            break;
        case 1:
            t = GT;
            break;
        default:
            break;
    }

//    i++;
    return t;
}
