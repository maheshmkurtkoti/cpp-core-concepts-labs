int main() {
    int* p = new int(10);
    p = new int(20);
    delete p;
}

//  Whats the bug here?
//  ✅ Answer
//  🚨 Memory leak

//  👉 Address of first allocation LOST
//  👉 Cannot delete it anymore

//  🎯 Interview line
//      Reassigning a pointer without deleting previous allocation causes a memory leak.