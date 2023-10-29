/**
 * @file Compiler.h
 * @author Melmaphother (melmaphother@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-10-29
 * 
 * @copyright Copyright (c) Melmaphother
 * 
 */
#include <iostream>
#include <fstream>

#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>

extern bool IsMessage;
extern bool IsErrorMode;


const std::vector<std::string> ReversedWord({
    "const",
    "var",
    "procedure",
    "ident",
    "call",
    "if",
    "begin",
    "end",
    "else",
    "then",
    "while",
    "do",
    "number",
    "R"
});

const std::vector<std::string> Punctuation({
    ".",
    ";",
    "+",
    "-",
    "*",
    "/",
    "(",
    ")",
});

const std::vector<std::string> Operand({
    "+",
    "-",
    "*",
    "/",
    "."
});

enum Mode{
    S,
    OBJ,
    EXE
};

/*
Normal functions
*/

/*
Compiler class
*/

class Compiler{

};