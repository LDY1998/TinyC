
// Generated from ./grammar/TinyCParse.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TinyCParseListener.h"


/**
 * This class provides an empty implementation of TinyCParseListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  TinyCParseBaseListener : public TinyCParseListener {
public:

  virtual void enterConstant(TinyCParse::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(TinyCParse::ConstantContext * /*ctx*/) override { }

  virtual void enterBreakStmt(TinyCParse::BreakStmtContext * /*ctx*/) override { }
  virtual void exitBreakStmt(TinyCParse::BreakStmtContext * /*ctx*/) override { }

  virtual void enterParam(TinyCParse::ParamContext * /*ctx*/) override { }
  virtual void exitParam(TinyCParse::ParamContext * /*ctx*/) override { }

  virtual void enterExpr(TinyCParse::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(TinyCParse::ExprContext * /*ctx*/) override { }

  virtual void enterFunc(TinyCParse::FuncContext * /*ctx*/) override { }
  virtual void exitFunc(TinyCParse::FuncContext * /*ctx*/) override { }

  virtual void enterAssign(TinyCParse::AssignContext * /*ctx*/) override { }
  virtual void exitAssign(TinyCParse::AssignContext * /*ctx*/) override { }

  virtual void enterDecl(TinyCParse::DeclContext * /*ctx*/) override { }
  virtual void exitDecl(TinyCParse::DeclContext * /*ctx*/) override { }

  virtual void enterRet(TinyCParse::RetContext * /*ctx*/) override { }
  virtual void exitRet(TinyCParse::RetContext * /*ctx*/) override { }

  virtual void enterForStmt(TinyCParse::ForStmtContext * /*ctx*/) override { }
  virtual void exitForStmt(TinyCParse::ForStmtContext * /*ctx*/) override { }

  virtual void enterWhileStmt(TinyCParse::WhileStmtContext * /*ctx*/) override { }
  virtual void exitWhileStmt(TinyCParse::WhileStmtContext * /*ctx*/) override { }

  virtual void enterStmt(TinyCParse::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(TinyCParse::StmtContext * /*ctx*/) override { }

  virtual void enterBlock(TinyCParse::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(TinyCParse::BlockContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

