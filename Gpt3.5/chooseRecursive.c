#include <stdio.h>

// Function to calculate the binomial coefficient (n choose k)
unsigned long long binomialCoefficient(int n, int k) {
    if (k < 0 || k > n) {
        return 0;  // Return 0 for invalid values of k
    }

    if (k == 0 || k == n) {
        return 1;  // Base case: C(n, 0) = C(n, n) = 1
    }

    // Recursive calculation using Pascal's identity: C(n, k) = C(n-1, k-1) + C(n-1, k)
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
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