#include <iostream>

int main()
{
    int x = 10;
    int* p = &x;

    std::cout << *p++ << std::endl;
    std::cout << *p << std::endl;
}

// ❓ What happens?
// This is parsed as:
// *(p++)
// NOT:
// (*p)++
// 🧠 Meaning
// print value at p
// then pointer moves
// 🎯 Interview one-liner
// Postfix ++ has higher precedence than dereference.