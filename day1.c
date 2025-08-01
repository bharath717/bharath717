#include <stdio.h> // Required for input/output functions like printf and scanf

int main() {
    int num1, num2, num3; // Declare three integer variables to store the numbers
    int sum;              // Declare an integer variable to store the sum

    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    scanf("%d", &num1); // Read the first integer from the user

    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    scanf("%d", &num2); // Read the second integer from the user

    // Prompt the user to enter the third number
    printf("Enter the third number: ");
    scanf("%d", &num3); // Read the third integer from the user

    // Calculate the sum of the three numbers
    sum = num1 + num2 + num3;

    // Display the sum to the user
    printf("The sum of %d, %d, and %d is: %d\n", num1, num2, num3, sum);

    return 0; // Indicate successful program execution
}