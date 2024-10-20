#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number of elements.\n");
        return 1;
    }

    int numbers[n];  // Declare an array to store the numbers

    // Input the numbers
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Assume the first number is the largest initially
    int largest = numbers[0];

    // Iterate through the array to find the largest number
    for (i = 1; i < n; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    printf("The largest number is: %d\n", largest);
    return 0;
}