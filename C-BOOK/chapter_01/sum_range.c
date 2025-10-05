#include <stdio.h>

int main() {
    int n, m, i, sum =0;
    
    printf("Enter the value of m : ");
    scanf("%d", &m);
    
    i = m;
    
    printf("Enter the value of n : ");
    scanf("%d", &n);
    
    while(i <= n) {
        sum = sum + i;
        i = i + 1;
    }
    
    printf("The sum of numbers from %d to %d = %d", m, n, sum);
    return 0;
}