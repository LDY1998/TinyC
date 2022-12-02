#include "common.h"
namespace visitor
{
    class AbstractASTVisitor
    {
    public:
        virtual std::any visitChildren(ast::TinyCAST *node);
        virtual std::any visit(ast::TinyCAST *tree);

        virtual bool shouldVisitNextChild(ast::TinyCAST * /*node*/, const std::any & /*currentResult*/);

        virtual std::any defaultResult();

        virtual std::any aggregateResult(std::any /*aggregate*/, std::any nextResult);

    private:
    };

}