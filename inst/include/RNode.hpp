#ifndef RASTR_AST_RNODE_HPP
#define RASTR_AST_RNODE_HPP

#include "Node.hpp"

namespace rastr {
namespace ast {

class RNode: public Node {
  public:
    explicit RNode(Type type): Node(type) {
    }

    virtual ~RNode() = default;

    Language get_language() const override {
        return Language::R;
    }
};

using RNodeSPtr = std::shared_ptr<RNode>;

} // namespace ast
} // namespace rastr

#endif /* RASTR_AST_RNODE_HPP */
