parser grammar TinyCParse;

options {   tokenVocab = TinyCLex; }

program: stmt* func+ EOF;


stmt: (assign | decl | ret) COL | whileStmt | forStmt;
func: TYPESPEC ID LEFTPAREN param* RIGHTPAREN (COL | block);
assign: ID (LEFTSQUARE expr RIGHTSQUARE)* ASSIGN expr;
decl: TYPESPEC ID (LEFTSQUARE expr RIGHTSQUARE)*;
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

param: TYPESPEC (LEFTSQUARE RIGHTSQUARE)* ID;
expr: constant | SUB expr | BANG expr | expr BINARYOP expr
        | LEFTPAREN expr RIGHTPAREN
        | ID LEFTPAREN expr (COMMA expr)* RIGHTPAREN 
        | ID (LEFTSQUARE expr RIGHTSQUARE)*;


