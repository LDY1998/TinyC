parser grammar TinyCParse;

options {   tokenVocab = TinyCLex; }

program: stmt* func+ EOF;


stmt: (assign | decl | ret) COL | whileStmt | forStmt;
func: type ID LEFTPAREN param* RIGHTPAREN (COL | block);
assign: type? ident ASSIGN expr;
decl: type ident;
ret: RETURN expr?;
forStmt: FOR LEFTPAREN assign? COL expr? COL expr? RIGHTPAREN;
whileStmt: WHILE LEFTPAREN expr RIGHTPAREN (stmt | block);

block: LEFTBRACKET stmt* RIGHTBRACKET;

constant: numConst | charConst | strConst | boolConst;
numConst: NUMCONST;
charConst: CHARCONST;
strConst: STRINGCONST;
boolConst: BOOLCONST;
breakStmt: BREAK;

param: type (LEFTSQUARE RIGHTSQUARE)* ID;
expr: constant | SUB expr | BANG expr | expr BINARYOP expr
        | LEFTPAREN expr RIGHTPAREN
        | ID LEFTPAREN expr (COMMA expr)* RIGHTPAREN 
        | ID (LEFTSQUARE expr RIGHTSQUARE)*;

type: TYPESPEC;
ident: ID (LEFTSQUARE expr RIGHTSQUARE)*;
