#include <stdio.h>

int main() {
    int number;
    
    // Prompt user for input
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Multiply the number by 10
    int result = number * 10;
    
    // Print the result
    printf("The result is: %d\n", result);
    
    return 0;
}
