
// Generated from ./grammar/TinyCParse.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  TinyCParse : public antlr4::Parser {
public:
  enum {
    BREAK = 1, BOOLCONST = 2, TYPESPEC = 3, CONTINUE = 4, RETURN = 5, WHILE = 6, 
    FOR = 7, COL = 8, ADD = 9, SUB = 10, MUL = 11, BANG = 12, COMMA = 13, 
    MULOP = 14, UNARYOP = 15, LOGOP = 16, RELOP = 17, BINARYOP = 18, IF = 19, 
    LEFTPAREN = 20, RIGHTPAREN = 21, LEFTBRACKET = 22, RIGHTBRACKET = 23, 
    LEFTSQUARE = 24, RIGHTSQUARE = 25, ASSIGN = 26, ELSE = 27, LETTER = 28, 
    DIGIT = 29, LETDIG = 30, ID = 31, NUMCONST = 32, WS = 33, CHARCONST = 34, 
    STRINGCONST = 35, LINECOMMENT = 36, BLOCKCOMMENT = 37
  };

  enum {
    RuleConstant = 0, RuleBreakStmt = 1, RuleParam = 2, RuleExpr = 3, RuleFunc = 4, 
    RuleAssign = 5, RuleDecl = 6, RuleRet = 7, RuleForStmt = 8, RuleWhileStmt = 9, 
    RuleStmt = 10, RuleBlock = 11
  };

  TinyCParse(antlr4::TokenStream *input);
  ~TinyCParse();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ConstantContext;
  class BreakStmtContext;
  class ParamContext;
  class ExprContext;
  class FuncContext;
  class AssignContext;
  class DeclContext;
  class RetContext;
  class ForStmtContext;
  class WhileStmtContext;
  class StmtContext;
  class BlockContext; 

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMCONST();
    antlr4::tree::TerminalNode *CHARCONST();
    antlr4::tree::TerminalNode *STRINGCONST();
    antlr4::tree::TerminalNode *BOOLCONST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();

  class  BreakStmtContext : public antlr4::ParserRuleContext {
  public:
    BreakStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BREAK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BreakStmtContext* breakStmt();

  class  ParamContext : public antlr4::ParserRuleContext {
  public:
    ParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPESPEC();
    antlr4::tree::TerminalNode *ID();
    std::vector<antlr4::tree::TerminalNode *> LEFTSQUARE();
    antlr4::tree::TerminalNode* LEFTSQUARE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RIGHTSQUARE();
    antlr4::tree::TerminalNode* RIGHTSQUARE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamContext* param();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();
    antlr4::tree::TerminalNode *SUB();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *BANG();
    antlr4::tree::TerminalNode *LEFTPAREN();
    antlr4::tree::TerminalNode *RIGHTPAREN();
    antlr4::tree::TerminalNode *ID();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LEFTSQUARE();
    antlr4::tree::TerminalNode* LEFTSQUARE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RIGHTSQUARE();
    antlr4::tree::TerminalNode* RIGHTSQUARE(size_t i);
    antlr4::tree::TerminalNode *BINARYOP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  FuncContext : public antlr4::ParserRuleContext {
  public:
    FuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPESPEC();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LEFTPAREN();
    antlr4::tree::TerminalNode *RIGHTPAREN();
    antlr4::tree::TerminalNode *COL();
    BlockContext *block();
    std::vector<ParamContext *> param();
    ParamContext* param(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncContext* func();

  class  AssignContext : public antlr4::ParserRuleContext {
  public:
    AssignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *ASSIGN();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LEFTSQUARE();
    antlr4::tree::TerminalNode* LEFTSQUARE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RIGHTSQUARE();
    antlr4::tree::TerminalNode* RIGHTSQUARE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignContext* assign();

  class  DeclContext : public antlr4::ParserRuleContext {
  public:
    DeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPESPEC();
    antlr4::tree::TerminalNode *ID();
    std::vector<antlr4::tree::TerminalNode *> LEFTSQUARE();
    antlr4::tree::TerminalNode* LEFTSQUARE(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RIGHTSQUARE();
    antlr4::tree::TerminalNode* RIGHTSQUARE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclContext* decl();

  class  RetContext : public antlr4::ParserRuleContext {
  public:
    RetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RetContext* ret();

  class  ForStmtContext : public antlr4::ParserRuleContext {
  public:
    ForStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *LEFTPAREN();
    std::vector<antlr4::tree::TerminalNode *> COL();
    antlr4::tree::TerminalNode* COL(size_t i);
    antlr4::tree::TerminalNode *RIGHTPAREN();
    AssignContext *assign();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForStmtContext* forStmt();

  class  WhileStmtContext : public antlr4::ParserRuleContext {
  public:
    WhileStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *LEFTPAREN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RIGHTPAREN();
    StmtContext *stmt();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileStmtContext* whileStmt();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COL();
    AssignContext *assign();
    DeclContext *decl();
    RetContext *ret();
    WhileStmtContext *whileStmt();
    ForStmtContext *forStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFTBRACKET();
    antlr4::tree::TerminalNode *RIGHTBRACKET();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

