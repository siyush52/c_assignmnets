#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    
    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Output
    printf("Factorial of %d = %d\n", num, factorial(num));

    return 0;
}