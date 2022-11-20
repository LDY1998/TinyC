#include <gtest/gtest.h>
#include "ast.h"
#include "lexer.h"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions)
{
    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
    // Expect equality.
    EXPECT_EQ(7 * 6, 42);
}

TEST(NumberTokenTest, BasicAssertions)
{
    std::string test_str = "7";
    Lexer lexer = Lexer(test_str);
    Token t = lexer.num();

    EXPECT_EQ(t.is_kind(TokenType::Number), true);
    EXPECT_EQ(t.get_lex_string(), "7");
}

TEST(StringTokenTest, BasicAssertions)
{
    std::string test_str = "\"7\"";
    Lexer lexer = Lexer(test_str);
    Token t = lexer.string_literal();

    EXPECT_EQ(t.is_kind(TokenType::StringLiteral), true);
    EXPECT_EQ(t.get_lex_string(), "\"7\"");
}

TEST(IdentTokenTest, BasicAssertions)
{
    std::string test_str = "ident";
    Lexer lexer = Lexer(test_str);
    Token t = lexer.keyword_identifier();

    EXPECT_EQ(t.is_kind(TokenType::Ident), true);
    EXPECT_EQ(t.get_lex_string(), "ident");
}

TEST(OpTokenTest, BasicAssertions)
{
    std::string test_str = "+=";
    Lexer lexer = Lexer(test_str);
    Token t = lexer.op();

    EXPECT_EQ(t.is_kind(TokenType::Op), true);
    EXPECT_EQ(t.get_lex_string(), "+=");
}

TEST(OpPlusTokenTest, BasicAssertions)
{
    std::string test_str = "+";
    Lexer lexer = Lexer(test_str);
    Token t = lexer.op();

    EXPECT_EQ(t.is_kind(TokenType::Op), true);
    EXPECT_EQ(t.get_lex_string(), "+");
}
// TEST(ExpressionTest, BasicAssertions) {
//     std::string test_str = "3+7";
//     Lexer lexer = Lexer(test_str);
    
// }