#include <any>
#include <memory>
#include <vector>

namespace visitor
{

    class AbstractASTVisitor;
    class TinyCASTVisitor;
}

namespace ast
{
    class TinyCAST;
    class Program;
    class Stmt;
    class NumConst;
    class Func;
    class Assign;
    class Decl;
    class Ret;
    class For;
    class While;
    class Block;
    class CharConst;
    class StrConst;
    class BoolConst;
    class Break;
    class Param;
    class Expr;
    class Ty;
    class Ident;
}

