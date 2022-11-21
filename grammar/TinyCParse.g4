parser grammar TinyCParse;

options {   tokenVocab = TinyCLex; }

constant: NUMCONST | CHARCONST | STRINGCONST | BOOLCONST;
breakStmt: BREAK;

param: TYPESPEC (LEFTSQUARE RIGHTSQUARE)* ID;
expr: constant | SUB expr | BANG expr | expr BINARYOP expr
        | LEFTPAREN expr RIGHTPAREN
        | ID LEFTPAREN expr (COMMA expr)* RIGHTPAREN 
        | ID (LEFTSQUARE expr RIGHTSQUARE)*;

func: TYPESPEC ID LEFTPAREN param* RIGHTPAREN (COL | block);
assign: ID (LEFTSQUARE expr RIGHTSQUARE)* ASSIGN expr;
decl: TYPESPEC ID (LEFTSQUARE expr RIGHTSQUARE)*;
ret: RETURN expr?;
forStmt: FOR LEFTPAREN assign? COL expr? COL expr? RIGHTPAREN;
whileStmt: WHILE LEFTPAREN expr RIGHTPAREN (stmt | block);
stmt: (assign | decl | ret) COL | whileStmt | forStmt;
block: LEFTBRACKET stmt* RIGHTBRACKET;
