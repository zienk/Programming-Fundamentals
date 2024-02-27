#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;  // 0 and 1 are not prime
    int i;
	for (i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;  // If divisible by any number other than 1 and itself, not prime
    }
    return 1;  // Prime otherwise
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
	int i;
    for ( i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            sum += arr[i];
        }
    }

    printf("Sum of prime numbers in the array: %d\n", sum);

    return 0;
}

