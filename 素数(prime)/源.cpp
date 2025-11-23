#include "isPrime.h"

int main() {
    int n;
    std::cin >> n;

    if (isprime(n)) {
        std::cout << "Prime!" << std::endl;
    }
    else {
        std::cout << "Not Prime!" << std::endl;
    }
}