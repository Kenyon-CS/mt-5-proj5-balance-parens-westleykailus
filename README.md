# Project 5 — Recursive Balanced Parentheses Checker (C++)

## Overview
Finish a recursive function that checks whether a string’s parentheses are balanced. Ignore all non-paren characters.

**Learning goals**
- Recursive design
- Prefix property (never close more than opened)
- Base conditions and parameter threading

## Files
```
include/balance.hpp   # API
src/balance.cpp       # your changes here (finish is_balanced_rec)
tests/tests.cpp       # unit tests
Makefile
```

## Specification
- Only `(` and `)` matter; other characters are ignored.
- Prefix rule: at no point may `)` exceed `(`.
- At the end, the number of opens must be exactly closed.

## Your task
Complete the helper and keep the wrapper `is_balanced(s)`:
```cpp
static bool is_balanced_rec(const std::string& s, int idx, int open) {
  if (open < 0) return false;                      // closed too many
  if (idx == (int)s.size()) return open == 0;      // end of string
  char c = s[idx];
  if (c == '(') return is_balanced_rec(s, idx+1, open+1);
  if (c == ')') return is_balanced_rec(s, idx+1, open-1);
  return is_balanced_rec(s, idx+1, open);          // ignore other chars
}
```

#Sample expectations:
- `""` → balanced
- `"()"`, `"(())"` → balanced
- `")("`, `"(()"`, `"())(()"` → not balanced
- `"(a)(b)"` → balanced (ignores letters)

## Build, Test, and Submit

### 1) Build & test locally
```bash
make
make test
```

### 2) Submit:
- Commit & push to trigger autograding (Actions tab shows logs).
```bash
make submit
```

### 3) Submit to GitHub Classroom
```bash
git add -A
git commit -m "submit"
git push
```

## What we test
- Correct handling of empty, simple, and mixed strings
- Proper ignore of non-paren characters
- Straight recursion is fine
