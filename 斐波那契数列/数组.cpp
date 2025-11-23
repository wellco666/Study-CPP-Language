#include <iostream>
using namespace std;

int main() {
    int fib[20];

    
    fib[0] = 1;  
    fib[1] = 1;  

    for (int i = 2; i < 20; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 0; i < 20; ++i) {
        cout << fib[i] << endl;
    }

    return 0;
}