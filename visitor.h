#include "build/antlr4_generated_src/tinyc_parser/TinyCParseBaseVisitor.h"
#include "ast.h"
#include <iostream>

using namespace tinyc_parser;

class TinyCASTGenerateVisitor : public TinyCParseBaseVisitor
{
    std::any visitProgram(TinyCParse::ProgramContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any visitStmt(TinyCParse::StmtContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any visitFunc(TinyCParse::FuncContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any visitAssign(TinyCParse::AssignContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any visitDecl(TinyCParse::DeclContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any visitRet(TinyCParse::RetContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any visitForStmt(TinyCParse::ForStmtContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any visitWhileStmt(TinyCParse::WhileStmtContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any visitBlock(TinyCParse::BlockContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any visitConstant(TinyCParse::ConstantContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any visitNumConst(TinyCParse::NumConstContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any visitCharConst(TinyCParse::CharConstContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any visitStrConst(TinyCParse::StrConstContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any visitBoolConst(TinyCParse::BoolConstContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any visitBreakStmt(TinyCParse::BreakStmtContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any visitParam(TinyCParse::ParamContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any visitExpr(TinyCParse::ExprContext *ctx) override
    {
        return visitChildren(ctx);
    }
};

class TinyCParseTreePrintVisitor : public TinyCParseBaseVisitor
{
public:
    int indent = 0;
    std::any visitProgram(TinyCParse::ProgramContext *ctx) override
    {

        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        std::cout << "visitProgram: ";

        std::cout << ctx->getText() << std::endl;
        indent++;
        return visitChildren(ctx);
    }

    std::any visitStmt(TinyCParse::StmtContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        std::cout << "visitStmt: ";

        std::cout << ctx->getText() << std::endl;
        return visitChildren(ctx);
    }

    std::any visitFunc(TinyCParse::FuncContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        std::cout << "visitFunc: ";

        std::cout << ctx->getText() << std::endl;
        return visitChildren(ctx);
    }

    std::any visitAssign(TinyCParse::AssignContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        indent++;
        std::cout << "visitAssign: ";

        std::cout << ctx->getText() << std::endl;
        return visitChildren(ctx);
    }

    std::any visitDecl(TinyCParse::DeclContext *ctx) override
    {

        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        indent++;
        std::cout << "visitDecl: ";
        std::cout << ctx->getText() << std::endl;
        return visitChildren(ctx);
    }

    std::any visitRet(TinyCParse::RetContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        indent++;
        std::cout << "visitRet: ";
        std::cout << ctx->getText() << std::endl;
        return visitChildren(ctx);
    }

    std::any visitForStmt(TinyCParse::ForStmtContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        indent++;
        std::cout << "visitFor: ";

        std::cout << ctx->getText() << std::endl;
        return visitChildren(ctx);
    }

    std::any visitWhileStmt(TinyCParse::WhileStmtContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        indent++;
        std::cout << "visitWhile: ";

        std::cout << ctx->getText() << std::endl;
        return visitChildren(ctx);
    }

    std::any visitBlock(TinyCParse::BlockContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        indent++;
        std::cout << "visitBlock: ";

        std::cout << ctx->getText() << std::endl;
        return visitChildren(ctx);
    }

    std::any visitConstant(TinyCParse::ConstantContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        indent++;
        std::cout << "visitConst: ";

        std::cout << ctx->getText() << std::endl;
        return visitChildren(ctx);
    }

    std::any visitCharConst(TinyCParse::CharConstContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        indent++;
        std::cout << "visitCharConst: ";

        std::cout << ctx->getText() << std::endl;
        return visitChildren(ctx);
    }

    std::any visitStrConst(TinyCParse::StrConstContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        indent++;
        std::cout << "visitStrConst: ";

        std::cout << ctx->getText() << std::endl;
        return visitChildren(ctx);
    }

    std::any visitBoolConst(TinyCParse::BoolConstContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        indent++;
        std::cout << "visitBoolConst: ";

        std::cout << ctx->getText() << std::endl;
        return visitChildren(ctx);
    }

    std::any visitBreakStmt(TinyCParse::BreakStmtContext *ctx) override
    {
        std::cout << "visitBreakConst: ";

        std::cout << ctx->getText() << std::endl;
        std::cout << "\t\t|-";
        return visitChildren(ctx);
    }

    std::any visitParam(TinyCParse::ParamContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        indent++;
        std::cout << "visitParam: ";

        std::cout << ctx->getText() << std::endl;
        return visitChildren(ctx);
    }

    std::any visitExpr(TinyCParse::ExprContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        indent++;
        std::cout << "visitExpr: ";

        std::cout << ctx->getText() << std::endl;
        return visitChildren(ctx);
    }
    std::any visitNumConst(TinyCParse::NumConstContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        indent++;
        std::cout << "visitNumConst: ";

        std::cout << ctx->getText() << std::endl;
        return visitChildren(ctx);
    }
};