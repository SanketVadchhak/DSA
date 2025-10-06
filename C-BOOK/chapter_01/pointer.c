#include <stdio.h>

int main() {
    int num, *pnum;
    pnum = &num;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    
    printf("Entered number was: %d", *pnum);
    return 0;
}