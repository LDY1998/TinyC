#include <iostream>
#include <fstream>
#include "build/antlr4_generated_src/tinyc_lexer/TinyCLex.h"
#include "build/antlr4_generated_src/tinyc_parser/TinyCParse.h"
#include "visitor.h"

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

    TinyCParseTreeVisitor visitor;
    visitor.visitProgram(tree);

    return 0;
}