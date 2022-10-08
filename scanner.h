#include <iostream>
#include <sstream>
#include <string>
// A simple lexical analyzer for C/C++-style variable declarations.
// The grammar for the declarations is as follows:
//
// <declaration> 	::= 	<type>  <var> ’;’ | <type> <var> ’=’ <number> ’;’
// <type> 		::= 	int | float
// <var> 		::= 	A | B | C | D | E
// <number> 	::= 	<integer> | <float>
// <integer> 	::= 	<integer> <digit> | <digit>
// <digit> 		::= 	0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9
// <float> 		::= 	<integer> ‘.’ <integer>
//
// The task of this exercise is to write a lexical analyzer (or
// scanner) for the tokens used in the above grammar. The following
// is the regular expression that defines the tokens:
//
//		= | ; | int | float | A | B | C | D | E | [0-9]+ | [0-9]+\.[0-9]+
//
// The program will read a declaration from the keyboard, and the
// scanner you design should recognize and print out all tokens
// included in the input. For example, given the following declaration:
//
//		int A = 123;
//
// your program should print:
//
// int
// A
// =
// 123
// ;
//
// Make sure your program print out the token one per line in the order
// they appear in the input. Once an erroneous token is encountered, your
// scanner should print out an error message and stopped scanning. For
// example, given the following input:
//
//		int A = 0#;
//
// your program should print:
//
// int
// A
// =
// 0
// #: Error: Unrecognizable token
//
// Note that tokens may NOT be separated by spaces. For example, the above
// input:
//
//		int A = 123;
//
// does not have a space to separate 123 and ;. Also, the following inputs
// are also legal and generate the same output:
//
//		int A=123;
//		intA=123;
//
// However, a whole token cannot be separated by spaces. For example, the
// following input will cause 12 and 3 to be regarded as two distinct tokens.
//
//		int A = 12 3;
//
// The ouput will look like:
// int
// A
// =
// 12
// 3
// ;
//
// Also note that the scanner doesn't check for syntactic errors. Therefore the
// above input is legal to this program.
//
// Other sample input:
//		float B;
//		float C=0.2;
//		short D;
//		float F;
//
// The last two sample inputs should generate errors because "short" and "F" are
// not acceptable tokens.
enum class TokenType
{
    Invalid,
    EndOfFile,
    Number,
    Add,
    Subtract,
    Multiply,
    Divide,
    LeftParenthesis,
    RightParenthesis,
    LeftSquare,
    RightSquare,
    LeftBracket,
    RightBracket,
    Col,
    Ident,
    UnExpected
};

class Token
{
public:
    Token(TokenType t) noexcept : m_kind(t) {}
    Token(TokenType t, char *begin, char *end) noexcept : m_kind(t), m_lex_str(begin, end) {}
    bool is_kind(TokenType t)
    {
        return t == m_kind;
    }

    bool is_one_of(TokenType t1, TokenType t2)
    {
        return is_kind(t1) || is_kind(t2);
    }
    template <typename... Ts>
    bool is_one_of(TokenType t1, TokenType t2, Ts... ts)
    {
        return is_kind(t1) || is_one_of(t2, ts...);
    }

private:
    TokenType m_kind{};
    std::string m_lex_str{};
};

class Scanner
{

public:
    Token identifier();
    Token num();
    Token next();

private:
    char *m_begin = nullptr;

    char peek();
    char get();
};

Token Scanner::identifier()
{
    char *begin = m_begin;
    get();
    while (is_ident_char(peek()))
        get();
    return Token(TokenType::Ident, begin, m_begin);
}

Token Scanner::num()
{
    char *begin = m_begin;
    get();
    while (isdigit(peek()))
        get();
    return Token(TokenType::Number, begin, m_begin);
}

Token Scanner::next()
{
    char *begin = m_begin;
    while (char c = get())
    {
        if (is_space(c))
            continue;

        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
            return identifier();
        if (c >= '0' && c <= '9')
            return num();
        if (c == '(')
            return Token(TokenType::LeftParenthesis, begin, m_begin);
        if (c == ')')
            return Token(TokenType::RightParenthesis, begin, m_begin);
        if (c == '[')
            return Token(TokenType::LeftSquare, begin, m_begin);
        if (c == ')')
            return Token(TokenType::RightSquare, begin, m_begin);
        if (c == '{')
            return Token(TokenType::LeftBracket, begin, m_begin);
        if (c == '}')
            return Token(TokenType::RightBracket, begin, m_begin);
        if (c == ';')
            return Token(TokenType::Col, begin, m_begin);
    }

    return Token(TokenType::UnExpected, begin, m_begin);
}

char Scanner::peek()
{
    return *m_begin;
}

char Scanner::get()
{
    return *m_begin++;
}

bool is_space(char c) noexcept
{
    return isspace(c);
}

bool is_ident_char(char c) noexcept
{
    if (c >= 'a' && c <= 'z')
        return true;
    if (c >= 'A' && c <= 'Z')
        return true;
    if (c >= '0' && c <= '9')
        return true;
    if (c == '_')
        return true;

    return false;
}