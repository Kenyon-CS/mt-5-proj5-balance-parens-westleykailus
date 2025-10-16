#include "balance.hpp"
#include <string>

static bool is_balanced_rec(const std::string& s, int idx, int open) {
    // TODO: implement recursively.
    // - If open < 0 => false
    // - If idx == s.size() => open == 0
    // - If '(' => recurse open+1
    // - If ')' => recurse open-1
    // - else ignore
    return false;
}

bool is_balanced(const std::string& s) {
    return is_balanced_rec(s, 0, 0);
}
