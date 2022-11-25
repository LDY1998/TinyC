lexer grammar TinyCLex;


BREAK: 'break';
BOOLCONST: 'true' | 'false';
TYPESPEC: 'int' | 'void' | 'bool' | 'char';
CONTINUE: 'continue';
RETURN: 'return';
WHILE: 'while';
FOR: 'for';
COL: ';';
ADD: '+';
SUB: '-';
MUL: '*';
BANG: '!';
COMMA: ',';
MULOP: MUL | '/' | '%';
UNARYOP: SUB | MUL | '?' | '&' | '~';
LOGOP: '&&' | '||';
RELOP: '<' | '<=' | '==' | '>=' | '>' | '!=';
BINARYOP: ADD | SUB | MULOP | LOGOP | RELOP;
IF: 'if';
LEFTPAREN: '(';
RIGHTPAREN: ')';
LEFTBRACKET: '{';
RIGHTBRACKET: '}';
LEFTSQUARE: '[';
RIGHTSQUARE: ']';
ASSIGN: '=' | '+=' | '-=' | '/=';
ELSE: 'else';

ID: LETTER LETDIG*;
NUMCONST: DIGIT+;

LETTER: [a-zA-Z]+;
DIGIT: [0-9];
LETDIG: DIGIT | LETTER;





WS: [ \r\n\t]+ -> skip;
CHARCONST: '\'' .*? '\'';
STRINGCONST: '"' .*? '"';
LINECOMMENT: '//' [~\r\n]* -> channel(HIDDEN); 
BLOCKCOMMENT: '/*' .*? '*/' -> channel(HIDDEN);