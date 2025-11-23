#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 1;

  
    cout << a << endl;
   
    cout << b << endl;

   
    for (int i = 3; i <= 20; ++i) {
        int next = a + b;
        cout << next << endl;
    
        a = b;
        b = next;
    }

    return 0;
}