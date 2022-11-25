
// Generated from ./grammar/TinyCParse.g4 by ANTLR 4.7.2


#include "TinyCParseListener.h"
#include "TinyCParseVisitor.h"

#include "TinyCParse.h"


using namespace antlrcpp;
using namespace antlr4;

TinyCParse::TinyCParse(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

TinyCParse::~TinyCParse() {
  delete _interpreter;
}

std::string TinyCParse::getGrammarFileName() const {
  return "TinyCParse.g4";
}

const std::vector<std::string>& TinyCParse::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& TinyCParse::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

TinyCParse::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TinyCParse::DeclContext *> TinyCParse::ProgramContext::decl() {
  return getRuleContexts<TinyCParse::DeclContext>();
}

TinyCParse::DeclContext* TinyCParse::ProgramContext::decl(size_t i) {
  return getRuleContext<TinyCParse::DeclContext>(i);
}

std::vector<TinyCParse::FuncContext *> TinyCParse::ProgramContext::func() {
  return getRuleContexts<TinyCParse::FuncContext>();
}

TinyCParse::FuncContext* TinyCParse::ProgramContext::func(size_t i) {
  return getRuleContext<TinyCParse::FuncContext>(i);
}


size_t TinyCParse::ProgramContext::getRuleIndex() const {
  return TinyCParse::RuleProgram;
}

void TinyCParse::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TinyCParseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void TinyCParse::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TinyCParseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


antlrcpp::Any TinyCParse::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TinyCParseVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

TinyCParse::ProgramContext* TinyCParse::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, TinyCParse::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(29);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(26);
        decl(); 
      }
      setState(31);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(33); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(32);
      func();
      setState(35); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == TinyCParse::TYPESPEC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

TinyCParse::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TinyCParse::ConstantContext::NUMCONST() {
  return getToken(TinyCParse::NUMCONST, 0);
}

tree::TerminalNode* TinyCParse::ConstantContext::CHARCONST() {
  return getToken(TinyCParse::CHARCONST, 0);
}

tree::TerminalNode* TinyCParse::ConstantContext::STRINGCONST() {
  return getToken(TinyCParse::STRINGCONST, 0);
}

tree::TerminalNode* TinyCParse::ConstantContext::BOOLCONST() {
  return getToken(TinyCParse::BOOLCONST, 0);
}


size_t TinyCParse::ConstantContext::getRuleIndex() const {
  return TinyCParse::RuleConstant;
}

void TinyCParse::ConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TinyCParseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant(this);
}

void TinyCParse::ConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TinyCParseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant(this);
}


antlrcpp::Any TinyCParse::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TinyCParseVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

TinyCParse::ConstantContext* TinyCParse::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 2, TinyCParse::RuleConstant);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(37);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TinyCParse::BOOLCONST)
      | (1ULL << TinyCParse::NUMCONST)
      | (1ULL << TinyCParse::CHARCONST)
      | (1ULL << TinyCParse::STRINGCONST))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakStmtContext ------------------------------------------------------------------

TinyCParse::BreakStmtContext::BreakStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TinyCParse::BreakStmtContext::BREAK() {
  return getToken(TinyCParse::BREAK, 0);
}


size_t TinyCParse::BreakStmtContext::getRuleIndex() const {
  return TinyCParse::RuleBreakStmt;
}

void TinyCParse::BreakStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TinyCParseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakStmt(this);
}

void TinyCParse::BreakStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TinyCParseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakStmt(this);
}


antlrcpp::Any TinyCParse::BreakStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TinyCParseVisitor*>(visitor))
    return parserVisitor->visitBreakStmt(this);
  else
    return visitor->visitChildren(this);
}

TinyCParse::BreakStmtContext* TinyCParse::breakStmt() {
  BreakStmtContext *_localctx = _tracker.createInstance<BreakStmtContext>(_ctx, getState());
  enterRule(_localctx, 4, TinyCParse::RuleBreakStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(39);
    match(TinyCParse::BREAK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamContext ------------------------------------------------------------------

TinyCParse::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TinyCParse::ParamContext::TYPESPEC() {
  return getToken(TinyCParse::TYPESPEC, 0);
}

tree::TerminalNode* TinyCParse::ParamContext::ID() {
  return getToken(TinyCParse::ID, 0);
}

std::vector<tree::TerminalNode *> TinyCParse::ParamContext::LEFTSQUARE() {
  return getTokens(TinyCParse::LEFTSQUARE);
}

tree::TerminalNode* TinyCParse::ParamContext::LEFTSQUARE(size_t i) {
  return getToken(TinyCParse::LEFTSQUARE, i);
}

std::vector<tree::TerminalNode *> TinyCParse::ParamContext::RIGHTSQUARE() {
  return getTokens(TinyCParse::RIGHTSQUARE);
}

tree::TerminalNode* TinyCParse::ParamContext::RIGHTSQUARE(size_t i) {
  return getToken(TinyCParse::RIGHTSQUARE, i);
}


size_t TinyCParse::ParamContext::getRuleIndex() const {
  return TinyCParse::RuleParam;
}

void TinyCParse::ParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TinyCParseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParam(this);
}

void TinyCParse::ParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TinyCParseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParam(this);
}


antlrcpp::Any TinyCParse::ParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TinyCParseVisitor*>(visitor))
    return parserVisitor->visitParam(this);
  else
    return visitor->visitChildren(this);
}

TinyCParse::ParamContext* TinyCParse::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 6, TinyCParse::RuleParam);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(41);
    match(TinyCParse::TYPESPEC);
    setState(46);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TinyCParse::LEFTSQUARE) {
      setState(42);
      match(TinyCParse::LEFTSQUARE);
      setState(43);
      match(TinyCParse::RIGHTSQUARE);
      setState(48);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(49);
    match(TinyCParse::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

TinyCParse::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TinyCParse::ConstantContext* TinyCParse::ExprContext::constant() {
  return getRuleContext<TinyCParse::ConstantContext>(0);
}

tree::TerminalNode* TinyCParse::ExprContext::SUB() {
  return getToken(TinyCParse::SUB, 0);
}

std::vector<TinyCParse::ExprContext *> TinyCParse::ExprContext::expr() {
  return getRuleContexts<TinyCParse::ExprContext>();
}

TinyCParse::ExprContext* TinyCParse::ExprContext::expr(size_t i) {
  return getRuleContext<TinyCParse::ExprContext>(i);
}

tree::TerminalNode* TinyCParse::ExprContext::BANG() {
  return getToken(TinyCParse::BANG, 0);
}

tree::TerminalNode* TinyCParse::ExprContext::LEFTPAREN() {
  return getToken(TinyCParse::LEFTPAREN, 0);
}

tree::TerminalNode* TinyCParse::ExprContext::RIGHTPAREN() {
  return getToken(TinyCParse::RIGHTPAREN, 0);
}

tree::TerminalNode* TinyCParse::ExprContext::ID() {
  return getToken(TinyCParse::ID, 0);
}

std::vector<tree::TerminalNode *> TinyCParse::ExprContext::COMMA() {
  return getTokens(TinyCParse::COMMA);
}

tree::TerminalNode* TinyCParse::ExprContext::COMMA(size_t i) {
  return getToken(TinyCParse::COMMA, i);
}

std::vector<tree::TerminalNode *> TinyCParse::ExprContext::LEFTSQUARE() {
  return getTokens(TinyCParse::LEFTSQUARE);
}

tree::TerminalNode* TinyCParse::ExprContext::LEFTSQUARE(size_t i) {
  return getToken(TinyCParse::LEFTSQUARE, i);
}

std::vector<tree::TerminalNode *> TinyCParse::ExprContext::RIGHTSQUARE() {
  return getTokens(TinyCParse::RIGHTSQUARE);
}

tree::TerminalNode* TinyCParse::ExprContext::RIGHTSQUARE(size_t i) {
  return getToken(TinyCParse::RIGHTSQUARE, i);
}

tree::TerminalNode* TinyCParse::ExprContext::BINARYOP() {
  return getToken(TinyCParse::BINARYOP, 0);
}


size_t TinyCParse::ExprContext::getRuleIndex() const {
  return TinyCParse::RuleExpr;
}

void TinyCParse::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TinyCParseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void TinyCParse::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TinyCParseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


antlrcpp::Any TinyCParse::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TinyCParseVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}


TinyCParse::ExprContext* TinyCParse::expr() {
   return expr(0);
}

TinyCParse::ExprContext* TinyCParse::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  TinyCParse::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  TinyCParse::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 8;
  enterRecursionRule(_localctx, 8, TinyCParse::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(83);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(52);
      constant();
      break;
    }

    case 2: {
      setState(53);
      match(TinyCParse::SUB);
      setState(54);
      expr(6);
      break;
    }

    case 3: {
      setState(55);
      match(TinyCParse::BANG);
      setState(56);
      expr(5);
      break;
    }

    case 4: {
      setState(57);
      match(TinyCParse::LEFTPAREN);
      setState(58);
      expr(0);
      setState(59);
      match(TinyCParse::RIGHTPAREN);
      break;
    }

    case 5: {
      setState(61);
      match(TinyCParse::ID);
      setState(62);
      match(TinyCParse::LEFTPAREN);
      setState(63);
      expr(0);
      setState(68);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TinyCParse::COMMA) {
        setState(64);
        match(TinyCParse::COMMA);
        setState(65);
        expr(0);
        setState(70);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(71);
      match(TinyCParse::RIGHTPAREN);
      break;
    }

    case 6: {
      setState(73);
      match(TinyCParse::ID);
      setState(80);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(74);
          match(TinyCParse::LEFTSQUARE);
          setState(75);
          expr(0);
          setState(76);
          match(TinyCParse::RIGHTSQUARE); 
        }
        setState(82);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
      }
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(90);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpr);
        setState(85);

        if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
        setState(86);
        match(TinyCParse::BINARYOP);
        setState(87);
        expr(5); 
      }
      setState(92);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FuncContext ------------------------------------------------------------------

TinyCParse::FuncContext::FuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TinyCParse::FuncContext::TYPESPEC() {
  return getToken(TinyCParse::TYPESPEC, 0);
}

tree::TerminalNode* TinyCParse::FuncContext::ID() {
  return getToken(TinyCParse::ID, 0);
}

tree::TerminalNode* TinyCParse::FuncContext::LEFTPAREN() {
  return getToken(TinyCParse::LEFTPAREN, 0);
}

tree::TerminalNode* TinyCParse::FuncContext::RIGHTPAREN() {
  return getToken(TinyCParse::RIGHTPAREN, 0);
}

tree::TerminalNode* TinyCParse::FuncContext::COL() {
  return getToken(TinyCParse::COL, 0);
}

TinyCParse::BlockContext* TinyCParse::FuncContext::block() {
  return getRuleContext<TinyCParse::BlockContext>(0);
}

std::vector<TinyCParse::ParamContext *> TinyCParse::FuncContext::param() {
  return getRuleContexts<TinyCParse::ParamContext>();
}

TinyCParse::ParamContext* TinyCParse::FuncContext::param(size_t i) {
  return getRuleContext<TinyCParse::ParamContext>(i);
}


size_t TinyCParse::FuncContext::getRuleIndex() const {
  return TinyCParse::RuleFunc;
}

void TinyCParse::FuncContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TinyCParseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc(this);
}

void TinyCParse::FuncContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TinyCParseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc(this);
}


antlrcpp::Any TinyCParse::FuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TinyCParseVisitor*>(visitor))
    return parserVisitor->visitFunc(this);
  else
    return visitor->visitChildren(this);
}

TinyCParse::FuncContext* TinyCParse::func() {
  FuncContext *_localctx = _tracker.createInstance<FuncContext>(_ctx, getState());
  enterRule(_localctx, 10, TinyCParse::RuleFunc);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(93);
    match(TinyCParse::TYPESPEC);
    setState(94);
    match(TinyCParse::ID);
    setState(95);
    match(TinyCParse::LEFTPAREN);
    setState(99);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TinyCParse::TYPESPEC) {
      setState(96);
      param();
      setState(101);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(102);
    match(TinyCParse::RIGHTPAREN);
    setState(105);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TinyCParse::COL: {
        setState(103);
        match(TinyCParse::COL);
        break;
      }

      case TinyCParse::LEFTBRACKET: {
        setState(104);
        block();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignContext ------------------------------------------------------------------

TinyCParse::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TinyCParse::AssignContext::ID() {
  return getToken(TinyCParse::ID, 0);
}

tree::TerminalNode* TinyCParse::AssignContext::ASSIGN() {
  return getToken(TinyCParse::ASSIGN, 0);
}

std::vector<TinyCParse::ExprContext *> TinyCParse::AssignContext::expr() {
  return getRuleContexts<TinyCParse::ExprContext>();
}

TinyCParse::ExprContext* TinyCParse::AssignContext::expr(size_t i) {
  return getRuleContext<TinyCParse::ExprContext>(i);
}

std::vector<tree::TerminalNode *> TinyCParse::AssignContext::LEFTSQUARE() {
  return getTokens(TinyCParse::LEFTSQUARE);
}

tree::TerminalNode* TinyCParse::AssignContext::LEFTSQUARE(size_t i) {
  return getToken(TinyCParse::LEFTSQUARE, i);
}

std::vector<tree::TerminalNode *> TinyCParse::AssignContext::RIGHTSQUARE() {
  return getTokens(TinyCParse::RIGHTSQUARE);
}

tree::TerminalNode* TinyCParse::AssignContext::RIGHTSQUARE(size_t i) {
  return getToken(TinyCParse::RIGHTSQUARE, i);
}


size_t TinyCParse::AssignContext::getRuleIndex() const {
  return TinyCParse::RuleAssign;
}

void TinyCParse::AssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TinyCParseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign(this);
}

void TinyCParse::AssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TinyCParseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign(this);
}


antlrcpp::Any TinyCParse::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TinyCParseVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}

TinyCParse::AssignContext* TinyCParse::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 12, TinyCParse::RuleAssign);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107);
    match(TinyCParse::ID);
    setState(114);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TinyCParse::LEFTSQUARE) {
      setState(108);
      match(TinyCParse::LEFTSQUARE);
      setState(109);
      expr(0);
      setState(110);
      match(TinyCParse::RIGHTSQUARE);
      setState(116);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(117);
    match(TinyCParse::ASSIGN);
    setState(118);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

TinyCParse::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TinyCParse::DeclContext::TYPESPEC() {
  return getToken(TinyCParse::TYPESPEC, 0);
}

tree::TerminalNode* TinyCParse::DeclContext::ID() {
  return getToken(TinyCParse::ID, 0);
}

std::vector<tree::TerminalNode *> TinyCParse::DeclContext::LEFTSQUARE() {
  return getTokens(TinyCParse::LEFTSQUARE);
}

tree::TerminalNode* TinyCParse::DeclContext::LEFTSQUARE(size_t i) {
  return getToken(TinyCParse::LEFTSQUARE, i);
}

std::vector<TinyCParse::ExprContext *> TinyCParse::DeclContext::expr() {
  return getRuleContexts<TinyCParse::ExprContext>();
}

TinyCParse::ExprContext* TinyCParse::DeclContext::expr(size_t i) {
  return getRuleContext<TinyCParse::ExprContext>(i);
}

std::vector<tree::TerminalNode *> TinyCParse::DeclContext::RIGHTSQUARE() {
  return getTokens(TinyCParse::RIGHTSQUARE);
}

tree::TerminalNode* TinyCParse::DeclContext::RIGHTSQUARE(size_t i) {
  return getToken(TinyCParse::RIGHTSQUARE, i);
}


size_t TinyCParse::DeclContext::getRuleIndex() const {
  return TinyCParse::RuleDecl;
}

void TinyCParse::DeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TinyCParseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecl(this);
}

void TinyCParse::DeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TinyCParseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecl(this);
}


antlrcpp::Any TinyCParse::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TinyCParseVisitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

TinyCParse::DeclContext* TinyCParse::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 14, TinyCParse::RuleDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    match(TinyCParse::TYPESPEC);
    setState(121);
    match(TinyCParse::ID);
    setState(128);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TinyCParse::LEFTSQUARE) {
      setState(122);
      match(TinyCParse::LEFTSQUARE);
      setState(123);
      expr(0);
      setState(124);
      match(TinyCParse::RIGHTSQUARE);
      setState(130);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RetContext ------------------------------------------------------------------

TinyCParse::RetContext::RetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TinyCParse::RetContext::RETURN() {
  return getToken(TinyCParse::RETURN, 0);
}

TinyCParse::ExprContext* TinyCParse::RetContext::expr() {
  return getRuleContext<TinyCParse::ExprContext>(0);
}


size_t TinyCParse::RetContext::getRuleIndex() const {
  return TinyCParse::RuleRet;
}

void TinyCParse::RetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TinyCParseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRet(this);
}

void TinyCParse::RetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TinyCParseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRet(this);
}


antlrcpp::Any TinyCParse::RetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TinyCParseVisitor*>(visitor))
    return parserVisitor->visitRet(this);
  else
    return visitor->visitChildren(this);
}

TinyCParse::RetContext* TinyCParse::ret() {
  RetContext *_localctx = _tracker.createInstance<RetContext>(_ctx, getState());
  enterRule(_localctx, 16, TinyCParse::RuleRet);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    match(TinyCParse::RETURN);
    setState(133);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TinyCParse::BOOLCONST)
      | (1ULL << TinyCParse::SUB)
      | (1ULL << TinyCParse::BANG)
      | (1ULL << TinyCParse::LEFTPAREN)
      | (1ULL << TinyCParse::ID)
      | (1ULL << TinyCParse::NUMCONST)
      | (1ULL << TinyCParse::CHARCONST)
      | (1ULL << TinyCParse::STRINGCONST))) != 0)) {
      setState(132);
      expr(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStmtContext ------------------------------------------------------------------

TinyCParse::ForStmtContext::ForStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TinyCParse::ForStmtContext::FOR() {
  return getToken(TinyCParse::FOR, 0);
}

tree::TerminalNode* TinyCParse::ForStmtContext::LEFTPAREN() {
  return getToken(TinyCParse::LEFTPAREN, 0);
}

std::vector<tree::TerminalNode *> TinyCParse::ForStmtContext::COL() {
  return getTokens(TinyCParse::COL);
}

tree::TerminalNode* TinyCParse::ForStmtContext::COL(size_t i) {
  return getToken(TinyCParse::COL, i);
}

tree::TerminalNode* TinyCParse::ForStmtContext::RIGHTPAREN() {
  return getToken(TinyCParse::RIGHTPAREN, 0);
}

TinyCParse::AssignContext* TinyCParse::ForStmtContext::assign() {
  return getRuleContext<TinyCParse::AssignContext>(0);
}

std::vector<TinyCParse::ExprContext *> TinyCParse::ForStmtContext::expr() {
  return getRuleContexts<TinyCParse::ExprContext>();
}

TinyCParse::ExprContext* TinyCParse::ForStmtContext::expr(size_t i) {
  return getRuleContext<TinyCParse::ExprContext>(i);
}


size_t TinyCParse::ForStmtContext::getRuleIndex() const {
  return TinyCParse::RuleForStmt;
}

void TinyCParse::ForStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TinyCParseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStmt(this);
}

void TinyCParse::ForStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TinyCParseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStmt(this);
}


antlrcpp::Any TinyCParse::ForStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TinyCParseVisitor*>(visitor))
    return parserVisitor->visitForStmt(this);
  else
    return visitor->visitChildren(this);
}

TinyCParse::ForStmtContext* TinyCParse::forStmt() {
  ForStmtContext *_localctx = _tracker.createInstance<ForStmtContext>(_ctx, getState());
  enterRule(_localctx, 18, TinyCParse::RuleForStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    match(TinyCParse::FOR);
    setState(136);
    match(TinyCParse::LEFTPAREN);
    setState(138);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TinyCParse::ID) {
      setState(137);
      assign();
    }
    setState(140);
    match(TinyCParse::COL);
    setState(142);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TinyCParse::BOOLCONST)
      | (1ULL << TinyCParse::SUB)
      | (1ULL << TinyCParse::BANG)
      | (1ULL << TinyCParse::LEFTPAREN)
      | (1ULL << TinyCParse::ID)
      | (1ULL << TinyCParse::NUMCONST)
      | (1ULL << TinyCParse::CHARCONST)
      | (1ULL << TinyCParse::STRINGCONST))) != 0)) {
      setState(141);
      expr(0);
    }
    setState(144);
    match(TinyCParse::COL);
    setState(146);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TinyCParse::BOOLCONST)
      | (1ULL << TinyCParse::SUB)
      | (1ULL << TinyCParse::BANG)
      | (1ULL << TinyCParse::LEFTPAREN)
      | (1ULL << TinyCParse::ID)
      | (1ULL << TinyCParse::NUMCONST)
      | (1ULL << TinyCParse::CHARCONST)
      | (1ULL << TinyCParse::STRINGCONST))) != 0)) {
      setState(145);
      expr(0);
    }
    setState(148);
    match(TinyCParse::RIGHTPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStmtContext ------------------------------------------------------------------

TinyCParse::WhileStmtContext::WhileStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TinyCParse::WhileStmtContext::WHILE() {
  return getToken(TinyCParse::WHILE, 0);
}

tree::TerminalNode* TinyCParse::WhileStmtContext::LEFTPAREN() {
  return getToken(TinyCParse::LEFTPAREN, 0);
}

TinyCParse::ExprContext* TinyCParse::WhileStmtContext::expr() {
  return getRuleContext<TinyCParse::ExprContext>(0);
}

tree::TerminalNode* TinyCParse::WhileStmtContext::RIGHTPAREN() {
  return getToken(TinyCParse::RIGHTPAREN, 0);
}

TinyCParse::StmtContext* TinyCParse::WhileStmtContext::stmt() {
  return getRuleContext<TinyCParse::StmtContext>(0);
}

TinyCParse::BlockContext* TinyCParse::WhileStmtContext::block() {
  return getRuleContext<TinyCParse::BlockContext>(0);
}


size_t TinyCParse::WhileStmtContext::getRuleIndex() const {
  return TinyCParse::RuleWhileStmt;
}

void TinyCParse::WhileStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TinyCParseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStmt(this);
}

void TinyCParse::WhileStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TinyCParseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStmt(this);
}


antlrcpp::Any TinyCParse::WhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TinyCParseVisitor*>(visitor))
    return parserVisitor->visitWhileStmt(this);
  else
    return visitor->visitChildren(this);
}

TinyCParse::WhileStmtContext* TinyCParse::whileStmt() {
  WhileStmtContext *_localctx = _tracker.createInstance<WhileStmtContext>(_ctx, getState());
  enterRule(_localctx, 20, TinyCParse::RuleWhileStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    match(TinyCParse::WHILE);
    setState(151);
    match(TinyCParse::LEFTPAREN);
    setState(152);
    expr(0);
    setState(153);
    match(TinyCParse::RIGHTPAREN);
    setState(156);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TinyCParse::TYPESPEC:
      case TinyCParse::RETURN:
      case TinyCParse::WHILE:
      case TinyCParse::FOR:
      case TinyCParse::ID: {
        setState(154);
        stmt();
        break;
      }

      case TinyCParse::LEFTBRACKET: {
        setState(155);
        block();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

TinyCParse::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TinyCParse::StmtContext::COL() {
  return getToken(TinyCParse::COL, 0);
}

TinyCParse::AssignContext* TinyCParse::StmtContext::assign() {
  return getRuleContext<TinyCParse::AssignContext>(0);
}

TinyCParse::DeclContext* TinyCParse::StmtContext::decl() {
  return getRuleContext<TinyCParse::DeclContext>(0);
}

TinyCParse::RetContext* TinyCParse::StmtContext::ret() {
  return getRuleContext<TinyCParse::RetContext>(0);
}

TinyCParse::WhileStmtContext* TinyCParse::StmtContext::whileStmt() {
  return getRuleContext<TinyCParse::WhileStmtContext>(0);
}

TinyCParse::ForStmtContext* TinyCParse::StmtContext::forStmt() {
  return getRuleContext<TinyCParse::ForStmtContext>(0);
}


size_t TinyCParse::StmtContext::getRuleIndex() const {
  return TinyCParse::RuleStmt;
}

void TinyCParse::StmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TinyCParseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt(this);
}

void TinyCParse::StmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TinyCParseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt(this);
}


antlrcpp::Any TinyCParse::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TinyCParseVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

TinyCParse::StmtContext* TinyCParse::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 22, TinyCParse::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(167);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TinyCParse::TYPESPEC:
      case TinyCParse::RETURN:
      case TinyCParse::ID: {
        enterOuterAlt(_localctx, 1);
        setState(161);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case TinyCParse::ID: {
            setState(158);
            assign();
            break;
          }

          case TinyCParse::TYPESPEC: {
            setState(159);
            decl();
            break;
          }

          case TinyCParse::RETURN: {
            setState(160);
            ret();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(163);
        match(TinyCParse::COL);
        break;
      }

      case TinyCParse::WHILE: {
        enterOuterAlt(_localctx, 2);
        setState(165);
        whileStmt();
        break;
      }

      case TinyCParse::FOR: {
        enterOuterAlt(_localctx, 3);
        setState(166);
        forStmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

TinyCParse::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TinyCParse::BlockContext::LEFTBRACKET() {
  return getToken(TinyCParse::LEFTBRACKET, 0);
}

tree::TerminalNode* TinyCParse::BlockContext::RIGHTBRACKET() {
  return getToken(TinyCParse::RIGHTBRACKET, 0);
}

std::vector<TinyCParse::StmtContext *> TinyCParse::BlockContext::stmt() {
  return getRuleContexts<TinyCParse::StmtContext>();
}

TinyCParse::StmtContext* TinyCParse::BlockContext::stmt(size_t i) {
  return getRuleContext<TinyCParse::StmtContext>(i);
}


size_t TinyCParse::BlockContext::getRuleIndex() const {
  return TinyCParse::RuleBlock;
}

void TinyCParse::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TinyCParseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void TinyCParse::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TinyCParseListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


antlrcpp::Any TinyCParse::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TinyCParseVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

TinyCParse::BlockContext* TinyCParse::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 24, TinyCParse::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    match(TinyCParse::LEFTBRACKET);
    setState(173);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TinyCParse::TYPESPEC)
      | (1ULL << TinyCParse::RETURN)
      | (1ULL << TinyCParse::WHILE)
      | (1ULL << TinyCParse::FOR)
      | (1ULL << TinyCParse::ID))) != 0)) {
      setState(170);
      stmt();
      setState(175);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(176);
    match(TinyCParse::RIGHTBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool TinyCParse::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 4: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool TinyCParse::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> TinyCParse::_decisionToDFA;
atn::PredictionContextCache TinyCParse::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN TinyCParse::_atn;
std::vector<uint16_t> TinyCParse::_serializedATN;

std::vector<std::string> TinyCParse::_ruleNames = {
  "program", "constant", "breakStmt", "param", "expr", "func", "assign", 
  "decl", "ret", "forStmt", "whileStmt", "stmt", "block"
};

std::vector<std::string> TinyCParse::_literalNames = {
  "", "'break'", "", "", "'continue'", "'return'", "'while'", "'for'", "';'", 
  "'+'", "'-'", "'*'", "'!'", "','", "", "", "", "", "", "'if'", "'('", 
  "')'", "'{'", "'}'", "'['", "']'", "", "'else'"
};

std::vector<std::string> TinyCParse::_symbolicNames = {
  "", "BREAK", "BOOLCONST", "TYPESPEC", "CONTINUE", "RETURN", "WHILE", "FOR", 
  "COL", "ADD", "SUB", "MUL", "BANG", "COMMA", "MULOP", "UNARYOP", "LOGOP", 
  "RELOP", "BINARYOP", "IF", "LEFTPAREN", "RIGHTPAREN", "LEFTBRACKET", "RIGHTBRACKET", 
  "LEFTSQUARE", "RIGHTSQUARE", "ASSIGN", "ELSE", "LETTER", "DIGIT", "LETDIG", 
  "ID", "NUMCONST", "WS", "CHARCONST", "STRINGCONST", "LINECOMMENT", "BLOCKCOMMENT"
};

dfa::Vocabulary TinyCParse::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> TinyCParse::_tokenNames;

TinyCParse::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x27, 0xb5, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x3, 
    0x2, 0x7, 0x2, 0x1e, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x21, 0xb, 0x2, 0x3, 
    0x2, 0x6, 0x2, 0x24, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x25, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x2f, 
    0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x32, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x7, 0x6, 0x45, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x48, 0xb, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 
    0x6, 0x51, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x54, 0xb, 0x6, 0x5, 0x6, 0x56, 
    0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x5b, 0xa, 0x6, 0xc, 
    0x6, 0xe, 0x6, 0x5e, 0xb, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x7, 0x7, 0x64, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x67, 0xb, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x6c, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x73, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 
    0x76, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x81, 0xa, 0x9, 0xc, 0x9, 
    0xe, 0x9, 0x84, 0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x88, 0xa, 0xa, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x8d, 0xa, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x5, 0xb, 0x91, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x95, 0xa, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x5, 0xc, 0x9f, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x5, 0xd, 0xa4, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 
    0xd, 0xaa, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0xae, 0xa, 0xe, 0xc, 
    0xe, 0xe, 0xe, 0xb1, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x2, 0x3, 
    0xa, 0xf, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
    0x18, 0x1a, 0x2, 0x3, 0x5, 0x2, 0x4, 0x4, 0x22, 0x22, 0x24, 0x25, 0x2, 
    0xc0, 0x2, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x4, 0x27, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x29, 0x3, 0x2, 0x2, 0x2, 0x8, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xa, 0x55, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x5f, 0x3, 0x2, 0x2, 0x2, 0xe, 0x6d, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x12, 0x85, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x89, 0x3, 0x2, 0x2, 0x2, 0x16, 0x98, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xab, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0x1e, 0x5, 0x10, 0x9, 0x2, 0x1d, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x21, 
    0x3, 0x2, 0x2, 0x2, 0x1f, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x3, 
    0x2, 0x2, 0x2, 0x20, 0x23, 0x3, 0x2, 0x2, 0x2, 0x21, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x24, 0x5, 0xc, 0x7, 0x2, 0x23, 0x22, 0x3, 0x2, 0x2, 
    0x2, 0x24, 0x25, 0x3, 0x2, 0x2, 0x2, 0x25, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x25, 0x26, 0x3, 0x2, 0x2, 0x2, 0x26, 0x3, 0x3, 0x2, 0x2, 0x2, 0x27, 
    0x28, 0x9, 0x2, 0x2, 0x2, 0x28, 0x5, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 
    0x7, 0x3, 0x2, 0x2, 0x2a, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x30, 0x7, 
    0x5, 0x2, 0x2, 0x2c, 0x2d, 0x7, 0x1a, 0x2, 0x2, 0x2d, 0x2f, 0x7, 0x1b, 
    0x2, 0x2, 0x2e, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x32, 0x3, 0x2, 0x2, 
    0x2, 0x30, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0x31, 0x33, 0x3, 0x2, 0x2, 0x2, 0x32, 0x30, 0x3, 0x2, 0x2, 0x2, 0x33, 
    0x34, 0x7, 0x21, 0x2, 0x2, 0x34, 0x9, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 
    0x8, 0x6, 0x1, 0x2, 0x36, 0x56, 0x5, 0x4, 0x3, 0x2, 0x37, 0x38, 0x7, 
    0xc, 0x2, 0x2, 0x38, 0x56, 0x5, 0xa, 0x6, 0x8, 0x39, 0x3a, 0x7, 0xe, 
    0x2, 0x2, 0x3a, 0x56, 0x5, 0xa, 0x6, 0x7, 0x3b, 0x3c, 0x7, 0x16, 0x2, 
    0x2, 0x3c, 0x3d, 0x5, 0xa, 0x6, 0x2, 0x3d, 0x3e, 0x7, 0x17, 0x2, 0x2, 
    0x3e, 0x56, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x7, 0x21, 0x2, 0x2, 0x40, 
    0x41, 0x7, 0x16, 0x2, 0x2, 0x41, 0x46, 0x5, 0xa, 0x6, 0x2, 0x42, 0x43, 
    0x7, 0xf, 0x2, 0x2, 0x43, 0x45, 0x5, 0xa, 0x6, 0x2, 0x44, 0x42, 0x3, 
    0x2, 0x2, 0x2, 0x45, 0x48, 0x3, 0x2, 0x2, 0x2, 0x46, 0x44, 0x3, 0x2, 
    0x2, 0x2, 0x46, 0x47, 0x3, 0x2, 0x2, 0x2, 0x47, 0x49, 0x3, 0x2, 0x2, 
    0x2, 0x48, 0x46, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x7, 0x17, 0x2, 0x2, 
    0x4a, 0x56, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x52, 0x7, 0x21, 0x2, 0x2, 0x4c, 
    0x4d, 0x7, 0x1a, 0x2, 0x2, 0x4d, 0x4e, 0x5, 0xa, 0x6, 0x2, 0x4e, 0x4f, 
    0x7, 0x1b, 0x2, 0x2, 0x4f, 0x51, 0x3, 0x2, 0x2, 0x2, 0x50, 0x4c, 0x3, 
    0x2, 0x2, 0x2, 0x51, 0x54, 0x3, 0x2, 0x2, 0x2, 0x52, 0x50, 0x3, 0x2, 
    0x2, 0x2, 0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 0x56, 0x3, 0x2, 0x2, 
    0x2, 0x54, 0x52, 0x3, 0x2, 0x2, 0x2, 0x55, 0x35, 0x3, 0x2, 0x2, 0x2, 
    0x55, 0x37, 0x3, 0x2, 0x2, 0x2, 0x55, 0x39, 0x3, 0x2, 0x2, 0x2, 0x55, 
    0x3b, 0x3, 0x2, 0x2, 0x2, 0x55, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x55, 0x4b, 
    0x3, 0x2, 0x2, 0x2, 0x56, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0xc, 
    0x6, 0x2, 0x2, 0x58, 0x59, 0x7, 0x14, 0x2, 0x2, 0x59, 0x5b, 0x5, 0xa, 
    0x6, 0x7, 0x5a, 0x57, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5e, 0x3, 0x2, 0x2, 
    0x2, 0x5c, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 
    0x5d, 0xb, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5f, 
    0x60, 0x7, 0x5, 0x2, 0x2, 0x60, 0x61, 0x7, 0x21, 0x2, 0x2, 0x61, 0x65, 
    0x7, 0x16, 0x2, 0x2, 0x62, 0x64, 0x5, 0x8, 0x5, 0x2, 0x63, 0x62, 0x3, 
    0x2, 0x2, 0x2, 0x64, 0x67, 0x3, 0x2, 0x2, 0x2, 0x65, 0x63, 0x3, 0x2, 
    0x2, 0x2, 0x65, 0x66, 0x3, 0x2, 0x2, 0x2, 0x66, 0x68, 0x3, 0x2, 0x2, 
    0x2, 0x67, 0x65, 0x3, 0x2, 0x2, 0x2, 0x68, 0x6b, 0x7, 0x17, 0x2, 0x2, 
    0x69, 0x6c, 0x7, 0xa, 0x2, 0x2, 0x6a, 0x6c, 0x5, 0x1a, 0xe, 0x2, 0x6b, 
    0x69, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6c, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x6d, 0x74, 0x7, 0x21, 0x2, 0x2, 0x6e, 0x6f, 0x7, 
    0x1a, 0x2, 0x2, 0x6f, 0x70, 0x5, 0xa, 0x6, 0x2, 0x70, 0x71, 0x7, 0x1b, 
    0x2, 0x2, 0x71, 0x73, 0x3, 0x2, 0x2, 0x2, 0x72, 0x6e, 0x3, 0x2, 0x2, 
    0x2, 0x73, 0x76, 0x3, 0x2, 0x2, 0x2, 0x74, 0x72, 0x3, 0x2, 0x2, 0x2, 
    0x74, 0x75, 0x3, 0x2, 0x2, 0x2, 0x75, 0x77, 0x3, 0x2, 0x2, 0x2, 0x76, 
    0x74, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x7, 0x1c, 0x2, 0x2, 0x78, 0x79, 
    0x5, 0xa, 0x6, 0x2, 0x79, 0xf, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x7, 
    0x5, 0x2, 0x2, 0x7b, 0x82, 0x7, 0x21, 0x2, 0x2, 0x7c, 0x7d, 0x7, 0x1a, 
    0x2, 0x2, 0x7d, 0x7e, 0x5, 0xa, 0x6, 0x2, 0x7e, 0x7f, 0x7, 0x1b, 0x2, 
    0x2, 0x7f, 0x81, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7c, 0x3, 0x2, 0x2, 0x2, 
    0x81, 0x84, 0x3, 0x2, 0x2, 0x2, 0x82, 0x80, 0x3, 0x2, 0x2, 0x2, 0x82, 
    0x83, 0x3, 0x2, 0x2, 0x2, 0x83, 0x11, 0x3, 0x2, 0x2, 0x2, 0x84, 0x82, 
    0x3, 0x2, 0x2, 0x2, 0x85, 0x87, 0x7, 0x7, 0x2, 0x2, 0x86, 0x88, 0x5, 
    0xa, 0x6, 0x2, 0x87, 0x86, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x3, 0x2, 
    0x2, 0x2, 0x88, 0x13, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x7, 0x9, 0x2, 
    0x2, 0x8a, 0x8c, 0x7, 0x16, 0x2, 0x2, 0x8b, 0x8d, 0x5, 0xe, 0x8, 0x2, 
    0x8c, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8d, 
    0x8e, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x90, 0x7, 0xa, 0x2, 0x2, 0x8f, 0x91, 
    0x5, 0xa, 0x6, 0x2, 0x90, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x3, 
    0x2, 0x2, 0x2, 0x91, 0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0x94, 0x7, 0xa, 
    0x2, 0x2, 0x93, 0x95, 0x5, 0xa, 0x6, 0x2, 0x94, 0x93, 0x3, 0x2, 0x2, 
    0x2, 0x94, 0x95, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x3, 0x2, 0x2, 0x2, 
    0x96, 0x97, 0x7, 0x17, 0x2, 0x2, 0x97, 0x15, 0x3, 0x2, 0x2, 0x2, 0x98, 
    0x99, 0x7, 0x8, 0x2, 0x2, 0x99, 0x9a, 0x7, 0x16, 0x2, 0x2, 0x9a, 0x9b, 
    0x5, 0xa, 0x6, 0x2, 0x9b, 0x9e, 0x7, 0x17, 0x2, 0x2, 0x9c, 0x9f, 0x5, 
    0x18, 0xd, 0x2, 0x9d, 0x9f, 0x5, 0x1a, 0xe, 0x2, 0x9e, 0x9c, 0x3, 0x2, 
    0x2, 0x2, 0x9e, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0xa0, 0xa4, 0x5, 0xe, 0x8, 0x2, 0xa1, 0xa4, 0x5, 0x10, 0x9, 0x2, 
    0xa2, 0xa4, 0x5, 0x12, 0xa, 0x2, 0xa3, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa3, 
    0xa1, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 
    0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 0x7, 0xa, 0x2, 0x2, 0xa6, 0xaa, 0x3, 
    0x2, 0x2, 0x2, 0xa7, 0xaa, 0x5, 0x16, 0xc, 0x2, 0xa8, 0xaa, 0x5, 0x14, 
    0xb, 0x2, 0xa9, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa7, 0x3, 0x2, 0x2, 
    0x2, 0xa9, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x19, 0x3, 0x2, 0x2, 0x2, 
    0xab, 0xaf, 0x7, 0x18, 0x2, 0x2, 0xac, 0xae, 0x5, 0x18, 0xd, 0x2, 0xad, 
    0xac, 0x3, 0x2, 0x2, 0x2, 0xae, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xad, 
    0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb2, 0x3, 
    0x2, 0x2, 0x2, 0xb1, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x7, 0x19, 
    0x2, 0x2, 0xb3, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x15, 0x1f, 0x25, 0x30, 0x46, 
    0x52, 0x55, 0x5c, 0x65, 0x6b, 0x74, 0x82, 0x87, 0x8c, 0x90, 0x94, 0x9e, 
    0xa3, 0xa9, 0xaf, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

TinyCParse::Initializer TinyCParse::_init;
