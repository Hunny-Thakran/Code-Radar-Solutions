#include <stdio.h>

int isPrime(int n) {
    // Check if n is less than or equal to 1
    if (n <= 1) {
        return 0; // Not prime
    }
    
    // Check divisibility from 2 to sqrt(n)
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Not prime
        }
    }
    
    return 1; // Prime
}

int main() {
    int num;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check if the number is prime or not
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}
