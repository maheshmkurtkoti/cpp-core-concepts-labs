int main() {
    int* p = new int(10);
    delete p;
    delete p;  // ❌
}

//  ❓ What happens?
//  ✅ Answer : 🚨 Double free → undefined behavior  
//  Possible effects:
//      crash  
//      heap corruption 
//      silent bug (worst)

//  🎯 Interview line
//  Deleting the same pointer twice leads to undefined behavior and possible heap corruption.