#include "lexer.h"
#include "ast.h"



class Parser {
    public:
        Lexer lexer;
        
        std::unique_ptr<Ident> parse_ident();
        std::unique_ptr<Num> parse_num();
        std::unique_ptr<StringLiteral> parse_string_literal();
        std::unique_ptr<TypeSpec> parse_type_spec();
        std::unique_ptr<VarDecl> parse_var_decl();
        std::unique_ptr<FuncDecl> parse_func_decl();
        std::unique_ptr<Expression> parse_expression();
        std::unique_ptr<BinaryExpr> parse_binary();
        std::unique_ptr<Assignment> parse_assignment();
        std::unique_ptr<ReturnStmt> parse_return_stmt();
        std::unique_ptr<FuncCall> parse_func_call();

    private:
        std::vector<Token> tokens;    
        int currTokenIdx;
        void revert_to(int idx) {
            currTokenIdx = idx;
        }
        Token get();
        Token peek();

};