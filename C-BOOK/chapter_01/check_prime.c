#include <stdio.h>

int main() {
    int flag = 0, i, num;
    
    printf("Enter any number : ");
    scanf("%d", &num);
    
    for(i=2; i<num/2;i++) {
        if(num%i == 0) {
            flag =1;
            break;
        }
    }

    if(flag == 1)
        printf("%d is a composite number", num);
    else
        printf("%d is a prime number", num);
    return 0;
}