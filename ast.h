#include <memory>

enum OperatorType
{
    EqEq,
    NotEq,
    GEq,
    LEq,
    Gt,
    Lt
};

class IASTNode
{

public:
    virtual ~IASTNode() {}
    virtual void Accept(TinyCASTVisitor *visitor) const = 0;
};

class TypeSpec : public IASTNode
{
    std::string ty;

public:
    TypeSpec(const std::string &ty) : ty(ty) {}
};
class VarDecl : public IASTNode
{
    std::unique_ptr<Ident> name;
    std::unique_ptr<TypeSpec> type_decl;

public:
    VarDecl(std::unique_ptr<Ident> name, std::unique_ptr<TypeSpec> ty) : name(std::move(name)), type_decl(std::move(ty)) {}
};

class Ident : public IASTNode
{
public:
    std::string name;
    Ident(const std::string s) : name(s) {}
};

/**
 * @brief Numeric Node
 *
 */
class Num : public IASTNode
{
public:
    Num(double val) : val(val) {}

private:
    double val;
};

class StringLiteral : public IASTNode
{
public:
    StringLiteral(std::string val) : val(val) {}

private:
    std::string val;
};

class Expression : public IASTNode
{
};

class VarDecl : public IASTNode {
    
};
class Assignment : public IASTNode
{
    std::unique_ptr<Ident> var_name;
    std::unique_ptr<Expression> rhs;

public:
    Assignment(std::unique_ptr<Ident> ident, std::unique_ptr<Expression> rhs) : var_name(std::move(ident)), rhs(std::move(rhs)) {}
};
/**
 *
 * @brief Binary node
 */
class BinaryExpr : public Expression
{

    OperatorType op;
    std::unique_ptr<Expression> lhs;
    std::unique_ptr<Expression> rhs;
};

class TenaryExpr : public Expression
{

private:
    std::unique_ptr<Expression> condition;
    std::unique_ptr<Expression> true_expr;
    std::unique_ptr<Expression> false_expr;
};

/**
 * @brief Funciton declaration node
 *
 */
class FuncDecl : public IASTNode
{
    std::string func_name;
    std::unique_ptr<TypeSpec> return_type;
    std::vector<std::unique_ptr<Expression>> params;
    std::unique_ptr<IASTNode> body;

public:
    FuncDecl(std::string &func_name,
             std::unique_ptr<TypeSpec> return_type,
             std::vector<std::unique_ptr<Expression>> &params,
             std::unique_ptr<IASTNode> body) : func_name(func_name),
                                               return_type(std::move(return_type)),
                                               params(params),
                                               body(std::move(body)) {}
};

/**
 * @brief
 *
 */
class ReturnStmt : public IASTNode
{
    std::unique_ptr<Expression> ret_expr;

public:
    ReturnStmt(std::unique_ptr<Expression> ret_expr) : ret_expr(std::move(ret_expr)) {}
};

class FuncCall : public Expression
{
    std::string func_name;
    std::vector<std::unique_ptr<Expression>> args;

public:
    FuncCall(std::string &name, std::vector<std::unique_ptr<Expression>> &args) : func_name(name), args(args) {}
};