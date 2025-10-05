#include <stdio.h>

void swap_call_val(int, int);
void swap_call_ref(int *, int *);

int main() {
    int a = 1, b = 2, c = 3, d = 4;
    
    printf("\nIn main(), a = %d and b = %d", a, b);
    swap_call_val(a, b);
    printf("\nIn main(), a = %d and b = %d", a, b);
    
    printf("\nIn main(), c = %d and d = %d", c, d);
    swap_call_ref(&c, &d);
    printf("\nIn main(), c = %d and d = %d\n", c, d);
    
    return 0;
}

void swap_call_val(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("\nIn function (Call By Value Method) – a = %d and b = %d", a, b);
}

void swap_call_ref(int *c, int *d) {
    int temp = *c;
    *c = *d;
    *d = temp;
    printf("\nIn function (Call By Reference Method) – c = %d and d = %d", *c, *d);
}