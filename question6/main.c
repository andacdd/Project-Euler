#include <stdio.h>

int square(int x) {
    return x * x;
}

int gauss(int n) {
    return n*(n+1)/2;
}
int main(void) {
    int a = square(50*101);
    int sum = 0;
    int n;
    for (int i = 1; i <= 100; i++) {
        n = i*i;
        sum = sum + n;
    }
    printf("sum - a = %d\n", a - sum);



    return 0;
}