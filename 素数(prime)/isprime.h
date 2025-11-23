#include<iostream>

bool isprime(int n) {
    if (n == 1) return 0;
    else if (n == 2) return 1;
    else if (n % 2 == 0) return 0;
    else {
        for (int i = 3; i < n; i += 2) {
            if (n % i == 0) return 0;
            else return 1;
        }
    }
}
