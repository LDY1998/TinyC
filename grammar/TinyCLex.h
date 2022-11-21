
// Generated from ./grammar/TinyCLex.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  TinyCLex : public antlr4::Lexer {
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

  TinyCLex(antlr4::CharStream *input);
  ~TinyCLex();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

