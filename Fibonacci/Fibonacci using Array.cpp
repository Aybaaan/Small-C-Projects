/*
This approach in finding the fibonacci sequence
can handle up to 10000 or more number of terms.
*/

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fib[10000];

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    fib[0] = 0;
    fib[1] = 1;

    printf("Fibonacci Series: %llu, %llu", fib[0], fib[1]);

    for (i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf(", %llu", fib[i]);
    }

    return 0;
}
