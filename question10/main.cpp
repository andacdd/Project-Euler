#include <iostream>
#include <cmath>


int isPrime(int number) {
    if (number % 2 == 0 ) return false;
    if (number < 2) {
        return false;
    } else {
        for (int i = 2; i <= sqrt(number); i++) {
            if (number % i == 0) {
                return false;
            }
        }
    }
    return true;
}



int main() {
    int x = 2000000;
    long long count = 0;
    for (long long i = 1; i <= x ; i++) {
        if (isPrime(i)) {
            count = count + i;
        }
    }
    std::cout << count << std::endl;

    return 0;
}