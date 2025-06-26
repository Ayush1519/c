#include <stdio.h>

// Recursive function to find Fibonacci numbers
int fibonacci(int n) {
    if (n <= 1)//conditional
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
//main method
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci sequence: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
