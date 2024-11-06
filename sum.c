#include <stdio.h>

// Function to calculate the sum of two variables
int calculateSum(int a, int b) {
    return a + b;
}

#ifndef TESTING
int main() {
    int num1, num2, sum;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call the function to calculate the sum
    sum = calculateSum(num1, num2);

    // Output the result
    printf("The sum of %d and %d is %d.\n", num1, num2, sum);

    return 0;
}
#endif
