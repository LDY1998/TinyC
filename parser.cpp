#include "parser.h"

Token Parser::get()
{
    return tokens[currTokenIdx++];
}

Token Parser::peek()
{
    return tokens[currTokenIdx];
}

std::unique_ptr<Ident> Parser::parse_ident() {
    Token t = get();
    if (!t.is_kind(TokenType::Ident))
        return nullptr;
    return std::make_unique<Ident>(t.get_lex_string());
}

std::unique_ptr<Num> Parser::parse_num()
{
    Token t = get();
    if (!t.is_kind(TokenType::Number))
        return nullptr;

    double val = std::stod(t.get_lex_string());

    Num n = Num(val);

    std::unique_ptr<Num> res = std::make_unique<Num>(n);

    return res;
}

std::unique_ptr<StringLiteral> Parser::parse_string_literal()
{
    Token t = get();
    if (!t.is_kind(TokenType::StringLiteral))
        return nullptr;

    std::string val = t.get_lex_string();

    StringLiteral n = StringLiteral(val);
    std::unique_ptr<StringLiteral> res = std::make_unique<StringLiteral>(n);

    return res;
}
std::unique_ptr<TypeSpec> Parser::parse_type_spec()
{
    Token t = get();
    std::unique_ptr<TypeSpec> res = std::make_unique<TypeSpec>(TypeSpec(t.get_lex_string()));
    return res;
}

std::unique_ptr<VarDecl> Parser::parse_var_decl() {
    std::unique_ptr<TypeSpec> ty = parse_type_spec();
    std::unique_ptr<Ident> name = parse_ident();
    Token t = get();

    if (t.is_kind(TokenType::Col) && name) {
        VarDecl var_decl = VarDecl(std::move(name), std::move(ty));
        return std::make_unique<VarDecl>(var_decl);
    }

    return nullptr;
}
// TODO: finish parsing function params and body
std::unique_ptr<FuncDecl> Parser::parse_func_decl()
{
    int begin = currTokenIdx;
    std::unique_ptr<TypeSpec> ty = parse_type_spec();
    if (ty) {
        std::unique_ptr<Ident> func_name = parse_ident();
        if (func_name) {
            
        }
    }
}
std::unique_ptr<Expression> Parser::parse_expression()
{
}
// 
std::unique_ptr<BinaryExpr> Parser::parse_binary()
{
}
std::unique_ptr<Assignment> Parser::parse_assignment()
{
    std::unique_ptr<Ident> var_id = parse_ident();
    Token t = get();
    std::unique_ptr<Expression> rhs = parse_expression();

    return std::make_unique<Assignment>(Assignment(std::move(var_id), std::move(rhs)));

}
std::unique_ptr<ReturnStmt> Parser::parse_return_stmt()
{
    get();
    std::unique_ptr<Expression> ret_expr = parse_expression();
    return std::make_unique<ReturnStmt>(ReturnStmt(std::move(ret_expr)));
}
std::unique_ptr<FuncCall> Parser::parse_func_call()
{
}
