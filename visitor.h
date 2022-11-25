#include "build/antlr4_generated_src/tinyc_parser/TinyCParseBaseVisitor.h"
#include "ast.h"

using namespace tinyc_parser;
class TinyCParseVisitor : public TinyCParseBaseVisitor
{
    
    public:
    antlrcpp::Any visitConstant(TinyCParse::ConstantContext* ctxt) {
        if (antlr4::tree::TerminalNode* node =  ctxt->NUMCONST()) {
            std::string text = node->getText();

        }
    }
};

class TinyCASTVisitor
{
    virtual antlrcpp::Any visitExpr(std::unique_ptr<Expression> element) = 0;
};