#include <stdio.h>

int main() {
    int num, result;

    // Asking for user input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Adding 10 to the number
    result = num + 10;

    // Displaying the result
    printf("Result after adding 10: %d\n", result);

    return 0;
}