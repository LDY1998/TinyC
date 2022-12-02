// #include "visitor.h"
// #include "common.h"
#include <string>
#include <vector>
#include <any>
#include "visitor_interface.h"

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
            static_assert(std::is_base_of_v<TinyCAST, T>, "T must be derived from TinyCAST");
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
        std::vector<Func *> func();
        std::vector<Stmt *> stmt();
        virtual std::any accept(AbstractASTVisitor *visitor);
    };

    class Stmt : public TinyCAST
    {
        virtual std::any accept(AbstractASTVisitor *visitor);
    };

    class Func : public TinyCAST
    {
        virtual std::any accept(AbstractASTVisitor *visitor);
    };

    class Assign : public TinyCAST
    {
        virtual std::any accept(AbstractASTVisitor *visitor);
    };

    class Decl : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor);
    };

    class Ret : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor);
    };

    class For : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor);
    };

    class While : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor);
    };

    class Block : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor);
    };

    class NumConst : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor);
    };

    class CharConst : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor);
    };

    class StrConst : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor);
    };

    class BoolConst : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor);
    };

    class Break : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor);
    };

    class Param : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor);
    };

    class Expr : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor);
    };

    class Ty : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor);
    };

    class Ident : public TinyCAST
    {

        virtual std::any accept(AbstractASTVisitor *visitor);
    };
}
