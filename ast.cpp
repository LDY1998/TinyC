#include "ast.h"
#include "visitor.h"

namespace ast
{
    using namespace visitor;
    std::vector<Func *> Program::func()
    {
        return getChildren<Func>();
    }

    std::vector<Stmt *> Program::stmt()
    {
        return getChildren<Stmt>();
    }
    std::any Program::accept(AbstractASTVisitor *visitor)
    {
        if (auto programVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
        {
            return programVisitor->visitProgram(this);
        }
        return visitor->visitChildren(this);
    };

    std::any Stmt::accept(AbstractASTVisitor *visitor)
    {
        if (auto stmtVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
            return stmtVisitor->visitStmt(this);
        return visitor->visitChildren(this);
    }

    std::any Func::accept(AbstractASTVisitor *visitor)
    {
        if (auto funcVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
            return funcVisitor->visitFunc(this);
        return visitor->visitChildren(this);
    }

    std::any Assign::accept(AbstractASTVisitor *visitor)
    {
        if (auto assignVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
            return assignVisitor->visitAssign(this);
        return visitor->visitChildren(this);
    }

    std::any Decl::accept(AbstractASTVisitor *visitor)
    {
        if (auto declVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
            return declVisitor->visitDecl(this);
        return visitor->visitChildren(this);
    }

    std::any For::accept(AbstractASTVisitor *visitor)
    {
        if (auto forVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
            return forVisitor->visitForStmt(this);
        return visitor->visitChildren(this);
    }

    std::any While::accept(AbstractASTVisitor *visitor)
    {
        if (auto whileVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
            return whileVisitor->visitWhileStmt(this);
        return visitor->visitChildren(this);
    }

    std::any Block::accept(AbstractASTVisitor *visitor)
    {
        if (auto blockVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
            return blockVisitor->visitBlock(this);
        return visitor->visitChildren(this);
    }

    std::any NumConst::accept(AbstractASTVisitor *visitor)
        {
            if (auto numVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
                return numVisitor->visitNumConst(this);
            return visitor->visitChildren(this);
        }

        std::any CharConst::accept(AbstractASTVisitor *visitor)
        {
            if (auto charVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
                return charVisitor->visitCharConst(this);
            return visitor->visitChildren(this);
        }

        std::any StrConst::accept(AbstractASTVisitor *visitor)
        {
            if (auto strVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
                return strVisitor->visitStrConst(this);
            return visitor->visitChildren(this);
        }

        std::any BoolConst::accept(AbstractASTVisitor *visitor)
        {
            if (auto boolVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
                return boolVisitor->visitBoolConst(this);
            return visitor->visitChildren(this);
        }

        std::any Break::accept(AbstractASTVisitor *visitor)
        {
            if (auto breakVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
                return breakVisitor->visitBreakStmt(this);
            return visitor->visitChildren(this);
        }

        std::any Param::accept(AbstractASTVisitor *visitor)
        {
            if (auto paramVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
                return paramVisitor->visitParam(this);
            return visitor->visitChildren(this);
        }

        std::any Expr::accept(AbstractASTVisitor *visitor)
        {
            if (auto exprVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
                return exprVisitor->visitExpr(this);
            return visitor->visitChildren(this);
        }

        std::any Ty::accept(AbstractASTVisitor *visitor)
        {
            if (auto tyVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
                return tyVisitor->visitTy(this);
            return visitor->visitChildren(this);
        }

        std::any Ident::accept(AbstractASTVisitor *visitor)
        {
            if (auto identVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
                return identVisitor->visitIdent(this);
            return visitor->visitChildren(this);
        }
}
