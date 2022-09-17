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
};

class Token
{
public:
    Token(TokenType t) noexcept : m_kind(t) {}
    bool is_kind(TokenType t) {
        return t == m_kind;
    }

    bool is_one_of(TokenType t1, TokenType t2) {
        return is_kind(t1) || is_kind(t2);
    }
    template <typename... Ts>
    bool is_one_of(TokenType t1, TokenType t2, Ts... ts) {
        return is_kind(t1) || is_one_of(t2, ts...);
    }

private:
    TokenType m_kind{};
    std::string m_lex_str{};
};

class Scanner
{

public:
private:
    char *m_begin = nullptr;
};

bool is_space(char c) noexcept
{
    return isspace(c);
}