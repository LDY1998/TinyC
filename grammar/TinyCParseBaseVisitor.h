
// Generated from ./grammar/TinyCParse.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TinyCParseVisitor.h"


/**
 * This class provides an empty implementation of TinyCParseVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  TinyCParseBaseVisitor : public TinyCParseVisitor {
public:

  virtual antlrcpp::Any visitProgram(TinyCParse::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(TinyCParse::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBreakStmt(TinyCParse::BreakStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParam(TinyCParse::ParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(TinyCParse::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc(TinyCParse::FuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign(TinyCParse::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecl(TinyCParse::DeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRet(TinyCParse::RetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForStmt(TinyCParse::ForStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStmt(TinyCParse::WhileStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt(TinyCParse::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(TinyCParse::BlockContext *ctx) override {
    return visitChildren(ctx);
  }


};

