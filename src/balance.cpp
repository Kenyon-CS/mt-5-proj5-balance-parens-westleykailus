#include "balance.hpp"
#include <string>

static bool is_balanced_rec(const std::string& s, int idx, int open) {
    // TODO: implement recursively.
    // - If open < 0 => false
    if (open < 0) return false;
    // - If idx == s.size() => open == 0
    else if (idx == s.size()) open = 0;
    // - If '(' => recurse open+1
    else if (s == "(") {
        is_balanced_rec(s, idx, open + 1);
    }
    // - If ')' => recurse open-1
    else if (s == ")"){
        is_balanced_rec(s, idx, open - 1);
    }
    // - else ignore
    return false;
}

bool is_balanced(const std::string& s) {
    return is_balanced_rec(s, 0, 0);
}
