
// Generated from ./grammar/TinyCParse.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TinyCParse.h"


/**
 * This interface defines an abstract listener for a parse tree produced by TinyCParse.
 */
class  TinyCParseListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterConstant(TinyCParse::ConstantContext *ctx) = 0;
  virtual void exitConstant(TinyCParse::ConstantContext *ctx) = 0;

  virtual void enterBreakStmt(TinyCParse::BreakStmtContext *ctx) = 0;
  virtual void exitBreakStmt(TinyCParse::BreakStmtContext *ctx) = 0;

  virtual void enterParam(TinyCParse::ParamContext *ctx) = 0;
  virtual void exitParam(TinyCParse::ParamContext *ctx) = 0;

  virtual void enterExpr(TinyCParse::ExprContext *ctx) = 0;
  virtual void exitExpr(TinyCParse::ExprContext *ctx) = 0;

  virtual void enterFunc(TinyCParse::FuncContext *ctx) = 0;
  virtual void exitFunc(TinyCParse::FuncContext *ctx) = 0;

  virtual void enterAssign(TinyCParse::AssignContext *ctx) = 0;
  virtual void exitAssign(TinyCParse::AssignContext *ctx) = 0;

  virtual void enterDecl(TinyCParse::DeclContext *ctx) = 0;
  virtual void exitDecl(TinyCParse::DeclContext *ctx) = 0;

  virtual void enterRet(TinyCParse::RetContext *ctx) = 0;
  virtual void exitRet(TinyCParse::RetContext *ctx) = 0;

  virtual void enterForStmt(TinyCParse::ForStmtContext *ctx) = 0;
  virtual void exitForStmt(TinyCParse::ForStmtContext *ctx) = 0;

  virtual void enterWhileStmt(TinyCParse::WhileStmtContext *ctx) = 0;
  virtual void exitWhileStmt(TinyCParse::WhileStmtContext *ctx) = 0;

  virtual void enterStmt(TinyCParse::StmtContext *ctx) = 0;
  virtual void exitStmt(TinyCParse::StmtContext *ctx) = 0;

  virtual void enterBlock(TinyCParse::BlockContext *ctx) = 0;
  virtual void exitBlock(TinyCParse::BlockContext *ctx) = 0;


};

