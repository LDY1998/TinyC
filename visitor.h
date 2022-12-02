#include "build/antlr4_generated_src/tinyc_parser/TinyCParseBaseVisitor.h"
#include <iostream>
#include "ast.h"

using namespace tinyc_parser;

namespace visitor
{
    

    class TinyCASTVisitor : public AbstractASTVisitor
    {
    public:
        std::any visitProgram(ast::Program *ctx)
        {
            return visitChildren(ctx);
        }

        std::any visitStmt(ast::Stmt *ctx)
        {
            return visitChildren(ctx);
        }

        std::any visitFunc(ast::Func *ctx)
        {
            return visitChildren(ctx);
        }

        std::any visitAssign(ast::Assign *ctx)
        {
            return visitChildren(ctx);
        }

        std::any visitDecl(ast::Decl *ctx)
        {
            return visitChildren(ctx);
        }

        std::any visitRet(ast::Ret *ctx)
        {
            return visitChildren(ctx);
        }

        std::any visitForStmt(ast::For *ctx)
        {
            return visitChildren(ctx);
        }

        std::any visitWhileStmt(ast::While *ctx)
        {
            return visitChildren(ctx);
        }

        std::any visitBlock(ast::Block *ctx)
        {
            return visitChildren(ctx);
        }

        std::any visitNumConst(ast::NumConst *ctx)
        {
            return visitChildren(ctx);
        }

        std::any visitCharConst(ast::CharConst *ctx)
        {
            return visitChildren(ctx);
        }

        std::any visitStrConst(ast::StrConst *ctx)
        {
            return visitChildren(ctx);
        }

        std::any visitBoolConst(ast::BoolConst *ctx)
        {
            return visitChildren(ctx);
        }

        std::any visitBreakStmt(ast::Break *ctx)
        {
            return visitChildren(ctx);
        }

        std::any visitParam(ast::Param *ctx)
        {
            return visitChildren(ctx);
        }

        std::any visitExpr(ast::Expr *ctx)
        {
            return visitChildren(ctx);
        }

        std::any visitIdent(ast::Ident *ctx)
        {
            return visitChildren(ctx);
        }

        std::any visitTy(ast::Ty *ctx) {
            return visitChildren(ctx);
        }
    };
}

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
        std::any res = visitChildren(ctx);
        indent--;
        return res;
    }

    std::any visitStmt(TinyCParse::StmtContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        std::cout << "visitStmt: ";
        std::cout << ctx->getText() << std::endl;
        indent++;
        std::any res = visitChildren(ctx);
        indent--;
        return res;
    }

    std::any visitFunc(TinyCParse::FuncContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        std::cout << "visitFunc: ";

        std::cout << ctx->getText() << std::endl;
        indent++;
        std::any res = visitChildren(ctx);
        indent--;
        return res;
    }

    std::any visitAssign(TinyCParse::AssignContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        std::cout << "visitAssign: ";

        std::cout << ctx->getText() << std::endl;
        indent++;
        std::any res = visitChildren(ctx);
        indent--;
        return res;
    }

    std::any visitDecl(TinyCParse::DeclContext *ctx) override
    {

        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        std::cout << "visitDecl: ";
        std::cout << ctx->getText() << std::endl;
        indent++;
        std::any res = visitChildren(ctx);
        indent--;
        return res;
    }

    std::any visitRet(TinyCParse::RetContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        std::cout << "visitRet: ";
        std::cout << ctx->getText() << std::endl;
        indent++;
        std::any res = visitChildren(ctx);
        indent--;
        return res;
    }

    std::any visitForStmt(TinyCParse::ForStmtContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        std::cout << "visitFor: ";

        std::cout << ctx->getText() << std::endl;
        indent++;
        std::any res = visitChildren(ctx);
        indent--;
        return res;
    }

    std::any visitWhileStmt(TinyCParse::WhileStmtContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        std::cout << "visitWhile: ";

        std::cout << ctx->getText() << std::endl;
        indent++;
        std::any res = visitChildren(ctx);
        indent--;
        return res;
    }

    std::any visitBlock(TinyCParse::BlockContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        std::cout << "visitBlock: ";

        std::cout << ctx->getText() << std::endl;
        indent++;
        std::any res = visitChildren(ctx);
        indent--;
        return res;
    }

    std::any visitConstant(TinyCParse::ConstantContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        std::cout << "visitConst: ";

        std::cout << ctx->getText() << std::endl;
        indent++;
        std::any res = visitChildren(ctx);
        indent--;
        return res;
    }

    std::any visitCharConst(TinyCParse::CharConstContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        std::cout << "visitCharConst: ";

        std::cout << ctx->getText() << std::endl;
        indent++;
        std::any res = visitChildren(ctx);
        indent--;
        return res;
    }

    std::any visitStrConst(TinyCParse::StrConstContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        std::cout << "visitStrConst: ";

        std::cout << ctx->getText() << std::endl;
        indent++;
        std::any res = visitChildren(ctx);
        indent--;
        return res;
    }

    std::any visitBoolConst(TinyCParse::BoolConstContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        std::cout << "visitBoolConst: ";

        std::cout << ctx->getText() << std::endl;
        indent++;
        std::any res = visitChildren(ctx);
        indent--;
        return res;
    }

    std::any visitBreakStmt(TinyCParse::BreakStmtContext *ctx) override
    {
        std::cout << "visitBreakConst: ";

        std::cout << ctx->getText() << std::endl;
        indent++;
        std::any res = visitChildren(ctx);
        indent--;
        return res;
    }

    std::any visitParam(TinyCParse::ParamContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        std::cout << "visitParam: ";

        std::cout << ctx->getText() << std::endl;
        indent++;
        std::any res = visitChildren(ctx);
        indent--;
        return res;
    }

    std::any visitExpr(TinyCParse::ExprContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        std::cout << "visitExpr: ";

        std::cout << ctx->getText() << std::endl;
        indent++;
        std::any res = visitChildren(ctx);
        indent--;
        return res;
    }
    std::any visitNumConst(TinyCParse::NumConstContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        indent++;
        std::cout << "visitNumConst: ";

        std::cout << ctx->getText() << std::endl;
        indent++;
        std::any res = visitChildren(ctx);
        indent--;
        return res;
    }

    std::any visitType(TinyCParse::TypeContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        std::cout << "visitType: ";

        std::cout << ctx->getText() << std::endl;
        indent++;
        std::any res = visitChildren(ctx);
        indent--;
        return res;
    }

    std::any visitIdent(TinyCParse::IdentContext *ctx) override
    {
        for (int i = 0; i < indent; i++)
            std::cout << "\t";
        std::cout << "visitIdent: ";

        std::cout << ctx->getText() << std::endl;
        indent++;
        std::any res = visitChildren(ctx);
        indent--;
        return res;
    }
};