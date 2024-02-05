#include <stdio.h>

// Function to calculate the binomial coefficient (n choose k) iteratively
unsigned long long binomialCoefficient(int n, int k) {
    if (k < 0 || k > n) {
        return 0;  // Return 0 for invalid values of k
    }

    unsigned long long result = 1;

    // Calculate C(n, k) using the formula: C(n, k) = n! / (k! * (n - k)!)
    for (int i = 1; i <= k; ++i) {
        result *= n - i + 1;
        result /= i;
    }

    return result;
}

int main() {
    int n, k;

    // Input the values for n and k
    printf("Enter values for n and k (separated by a space): ");
    scanf("%d %d", &n, &k);

    // Calculate and output the binomial coefficient
    printf("C(%d, %d) = %llu\n", n, k, binomialCoefficient(n, k));

    return 0;
}