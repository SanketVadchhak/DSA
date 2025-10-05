#include <stdio.h>

void add(int *n);

int main()
{
    int num = 2;
    
    add(&num);
    
    return 0; 
    printf("\n The value of num before calling the function = %d", num);
    printf("\n The value of num after calling the function = %d", num);
}

void add(int *n)
{
    *n = *n + 10;
    
    printf("\n The value of num in the called function = %d", *n);
}