#include <memory>
#include <vector>
#include "common.h"

namespace ast
{
    using namespace visitor;
    enum OperatorType
    {
        EqEq,
        NotEq,
        GEq,
        LEq,
        Gt,
        Lt
    };

    class TinyCAST
    {
    public:
        TinyCAST(TinyCAST const &) = delete;

        virtual ~TinyCAST() = default;

        TinyCAST &operator=(TinyCAST const &) = delete;

        /// The parent of this node. If the return value is null, then this
        /// node is the root of the tree.
        TinyCAST *parent = nullptr;

        /// If we are debugging or building a parse tree for a visitor,
        /// we need to track all of the tokens and rule invocations associated
        /// with this rule's context. This is empty for parsing w/o tree constr.
        /// operation because we don't the need to track the details about
        /// how we parse this rule.
        // ml: memory is not managed here, but by the owning class. This is just for the structure.
        std::vector<TinyCAST *> children;

        /// Print out a whole tree, not just a node, in LISP format
        /// {@code (root child1 .. childN)}. Print just a node if this is a leaf.
        virtual std::string toStringTree(bool pretty = false) = 0;
        virtual std::string toString() = 0;

        virtual bool operator==(const TinyCAST &other) const;

        /// The <seealso cref="ParseTreeVisitor"/> needs a double dispatch method.
        /// ml: This has been changed to use Any instead of a template parameter, to avoid the need of a virtual template function.
        virtual std::any accept(AbstractASTVisitor *visitor) = 0;

        template <typename T>
        T *getChild(size_t i) const
        {
            static_assert(std::is_base_of_v<TinyCAST, T>, "T must be derived from TinyCAST");
            size_t j = 0; // what element have we found with ctxType?
            for (auto *child : children)
            {
                if (auto *typedChild = dynamic_cast<T *>(child); typedChild != nullptr)
                {
                    if (j++ == i)
                    {
                        return typedChild;
                    }
                }
            }
            return nullptr;
        }

        template <typename T>
        std::vector<T *> getChildren() const
        {
            static_assert(std::is_base_of_v<TinyCAST, T>, "T must be derived from RuleContext");
            std::vector<T *> contexts;
            for (auto *child : children)
            {
                if (auto *typedChild = dynamic_cast<T *>(child); typedChild != nullptr)
                {
                    contexts.push_back(typedChild);
                }
            }
            return contexts;
        }
    };
}

namespace ast
{
    class Program : public TinyCAST
    {

    public:
        std::vector<Func *> func()
        {
            return getChildren<Func>();
        }
        std::vector<Stmt *> stmt()
        {
            return getChildren<Stmt>();
        }
        virtual std::any accept(AbstractASTVisitor *visitor)
        {
            if (auto programVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
            {
                return programVisitor->visitProgram(this);
            }
            return visitor->visitChildren(this);
        };
    };

    class Stmt : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor)
        {
            if (auto stmtVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
                return stmtVisitor->visitStmt(this);
            return visitor->visitChildren(this);
        }
    };

    class Func : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor)
        {
            if (auto funcVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
                return funcVisitor->visitFunc(this);
            return visitor->visitChildren(this);
        }
    };

    class Assign : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor)
        {
            if (auto assignVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
                return assignVisitor->visitAssign(this);
            return visitor->visitChildren(this);
        }
    };

    class Decl : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor)
        {
            if (auto declVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
                return declVisitor->visitDecl(this);
            return visitor->visitChildren(this);
        }
    };

    class Ret : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor)
        {
            if (auto retVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
                return retVisitor->visitRet(this);
            return visitor->visitChildren(this);
        }
    };

    class For : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor)
        {
            if (auto forVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
                return forVisitor->visitForStmt(this);
            return visitor->visitChildren(this);
        }
    };

    class While : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor)
        {
            if (auto whileVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
                return whileVisitor->visitWhileStmt(this);
            return visitor->visitChildren(this);
        }
    };

    class Block : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor)
        {
            if (auto blockVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
                return blockVisitor->visitBlock(this);
            return visitor->visitChildren(this);
        }
    };

    class NumConst : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor)
        {
            if (auto numVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
                return numVisitor->visitNumConst(this);
            return visitor->visitChildren(this);
        }
    };

    class CharConst : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor)
        {
            if (auto charVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
                return charVisitor->visitCharConst(this);
            return visitor->visitChildren(this);
        }
    };

    class StrConst : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor)
        {
            if (auto strVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
                return strVisitor->visitStrConst(this);
            return visitor->visitChildren(this);
        }
    };

    class BoolConst : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor)
        {
            if (auto boolVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
                return boolVisitor->visitBoolConst(this);
            return visitor->visitChildren(this);
        }
    };

    class Break : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor)
        {
            if (auto breakVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
                return breakVisitor->visitBreakStmt(this);
            return visitor->visitChildren(this);
        }
    };

    class Param : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor)
        {
            if (auto paramVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
                return paramVisitor->visitParam(this);
            return visitor->visitChildren(this);
        }
    };

    class Expr : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor)
        {
            if (auto exprVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
                return exprVisitor->visitExpr(this);
            return visitor->visitChildren(this);
        }
    };

    class Ty : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor)
        {
            if (auto tyVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
                return tyVisitor->visitTy(this);
            return visitor->visitChildren(this);
        }
    };

    class Ident : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor)
        {
            if (auto identVisitor = dynamic_cast<TinyCASTVisitor *>(visitor))
                return identVisitor->visitIdent(this);
            return visitor->visitChildren(this);
        }
    };
}
