
// Generated from ./grammar/TinyCParse.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TinyCParse.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by TinyCParse.
 */
class  TinyCParseVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by TinyCParse.
   */
    virtual antlrcpp::Any visitProgram(TinyCParse::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitConstant(TinyCParse::ConstantContext *context) = 0;

    virtual antlrcpp::Any visitBreakStmt(TinyCParse::BreakStmtContext *context) = 0;

    virtual antlrcpp::Any visitParam(TinyCParse::ParamContext *context) = 0;

    virtual antlrcpp::Any visitExpr(TinyCParse::ExprContext *context) = 0;

    virtual antlrcpp::Any visitFunc(TinyCParse::FuncContext *context) = 0;

    virtual antlrcpp::Any visitAssign(TinyCParse::AssignContext *context) = 0;

    virtual antlrcpp::Any visitDecl(TinyCParse::DeclContext *context) = 0;

    virtual antlrcpp::Any visitRet(TinyCParse::RetContext *context) = 0;

    virtual antlrcpp::Any visitForStmt(TinyCParse::ForStmtContext *context) = 0;

    virtual antlrcpp::Any visitWhileStmt(TinyCParse::WhileStmtContext *context) = 0;

    virtual antlrcpp::Any visitStmt(TinyCParse::StmtContext *context) = 0;

    virtual antlrcpp::Any visitBlock(TinyCParse::BlockContext *context) = 0;


};

