#include "visitor.h"

namespace visitor
{
    virtual std::any AbstractASTVisitor::visitChildren(ast::TinyCAST *node)
    {
        std::any result = defaultResult();
        size_t n = node->children.size();
        for (size_t i = 0; i < n; i++)
        {
            if (!shouldVisitNextChild(node, result))
            {
                break;
            }

            std::any childResult = node->children[i]->accept(this);
            result = aggregateResult(std::move(result), std::move(childResult));
        }

        return result;
    }

    virtual std::any AbstractASTVisitor::visit(ast::TinyCAST *tree) override {
      return tree->accept(this);
    }

    virtual std::any AbstractASTVisitor::aggregateResult(std::any /*aggregate*/, std::any nextResult) {
      return nextResult;
    }

    virtual bool AbstractASTVisitor::shouldVisitNextChild(ParseTree * /*node*/, const std::any &/*currentResult*/) {
      return true;
    }
}