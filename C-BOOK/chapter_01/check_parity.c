#include <stdio.h>

int is_even_or_odd(int num);

int main() {
    int number;
    int result_code;

    printf("Enter an integer to check its parity: ");
    
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    result_code = is_even_or_odd(number);

    if (result_code == 1) {
        printf("The number %d is EVEN.\n", number);
    } else {
        printf("The number %d is ODD.\n", number);
    }

    return 0;
}

int is_even_or_odd(int num) {
    if (num % 2 == 0) {
        return 1; 
    } else {
        return 0; 
    }
}
