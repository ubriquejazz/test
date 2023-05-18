#include <stdio.h>

int isPrime(int number) {
    // Check for special cases
    if (number <= 1) {
        return 0;
    }

    // Check for divisibility from 2 to sqrt(number)
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0;  // Number is divisible, not prime
        }
    }

    return 1;  // Number is prime
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
