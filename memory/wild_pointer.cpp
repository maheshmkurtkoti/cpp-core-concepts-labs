int main() {
    int* p;
    *p = 10;
}

//  ❓ What is the issue?
//  ✅ Answer : 🚨 Wild pointer (uninitialized pointer)

//  🎯 Interview line
//  A wild pointer is an uninitialized pointer that may point to random memory.

//  ✔ Fix
//  int* p = nullptr;

//  or

//  int x;
//  int* p = &x;