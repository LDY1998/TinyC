#include <iostream>
#include <fstream>
// #include "grammar/TinyCLex.h"
// #include "grammar/TinyCParse.h"
#include "build/antlr4_generated_src/tinyc_lexer/TinyCLex.h"
#include "build/antlr4_generated_src/tinyc_parser/TinyCParse.h"

using namespace antlr4;
using namespace tinyc_lexer;
using namespace tinyc_parser;

int main(int argc, const char* argv[]) {
    std::ifstream stream;
    stream.open((char*)argv[1]);

    ANTLRInputStream input(stream);
    TinyCLex lexer(&input);
    CommonTokenStream  tokens(&lexer);
    TinyCParse parser(&tokens);

    TinyCParse::ProgramContext* tree = parser.program();

    return 0;
}