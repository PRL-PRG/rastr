#ifndef RASTR_I_KEYWORD_RNODE_HPP
#define RASTR_I_KEYWORD_RNODE_HPP

#include "KeywordRNode.hpp"

namespace rastr {
namespace ast {

class IKeyword {
  public:
    IKeyword(KeywordRNodeSPtr keyword): keyword_(keyword) {
    }

    virtual ~IKeyword() = default;

    KeywordRNodeSPtr get_keyword() const {
        return keyword_;
    }

    void set_keyword(KeywordRNodeSPtr keyword) {
        keyword_ = keyword;
    }

  private:
    KeywordRNodeSPtr keyword_;
};

} // namespace ast
} // namespace rastr

#endif /* RASTR_I_KEYWORD_RNODE_HPP */
