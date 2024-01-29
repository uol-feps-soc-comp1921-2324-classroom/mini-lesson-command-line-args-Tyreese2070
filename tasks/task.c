#include <stdio.h>
#include <stdlib.h>

/*
int main() {
    int num1, num2;

    // Prompt the user for input
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate and print the sum
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
*/

/*
argv[1] - First number
argv[2] - Second number
*/

int main(int argc, char *argv[])
{
    // Checking for the correct number of inputs
    if(argc != 3)
    {
        printf("Invalid input\n");
        return 0;
    }

    // Calculating the sum of the two inputs
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);
    return 0;
}