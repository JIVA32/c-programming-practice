#include <stdio.h>

int main() {
    int num, result;

    // Asking for user input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Multiplying the number by 2
    result = num * 2;

    // Displaying the result
    printf("Result after multiplying by 2: %d\n", result);

    return 0;
}