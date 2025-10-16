#include "balance.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

static bool all_passed = true;

void check(bool cond, const std::string& msg) {
    if (!cond) {
        all_passed = false;
        std::cout << "FAIL: " << msg << "\n";
    } else {
        std::cout << "PASS: " << msg << "\n";
    }
}

int main() {
    check(is_balanced(""), "empty balanced");
    check(is_balanced("()"), "() balanced");
    check(is_balanced("(())"), "(()) balanced");
    check(!is_balanced(")("), ")(");
    check(!is_balanced("(()"), "(()");
    check(is_balanced("(a)(b)"), "ignores non-paren");
    check(!is_balanced("())(()"), "mix");
    if (all_passed) std::cout << "ALL TESTS PASSED\n"; else std::cout << "SOME TESTS FAILED\n";
    return all_passed ? 0 : 1;
}
