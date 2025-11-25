#include <math.h>
#include <stdio.h>


int fibonacci(int n) {

    if (n ==2) {
        return 2;
    }
    if (n ==1) {
        return 1;
    }
    int k = n-2;
    int  n1 = 1 , n2 = 2;
    int n3;
    for (int i = 1; i <= k; i++) {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
    return n3;

}
int isPrime(int n) {
    if (n <= 1) {return 0;}
    if (n % 2 == 0) {return 0;}
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {return 0;}
    }
    return 1;
}


int main() {
    long long a = 600851475143;
    int l = 1;
    for (int i = 1; i <= sqrt(a); i++) {
        if (a % i == 0) {
            if (isPrime(i)  == 1 && i > l) {
                l = i;
            }
        }
    }
    printf("%d\n", l);
    return 0;
}