#include <stdio.h>

int isPalindrome(int n) {
    int x, y = 0;
    int z = n;
    while (n > 0) {
        x = n % 10;
        y = y*10 + x;
        n = n / 10;
    }
    return y == z;
}

int main() {
    int n = 0;
    int k;
    for (int i = 999; i >= 100; i--) {
        for (int j = 999; j >= 100; j--) {
            k = i * j;
            if (isPalindrome(k) == 1 && k > n) {
                n = k;
            }
        }
    }
    printf("%d\n", n);
    return 0;
}