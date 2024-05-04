#include<stdio.h>

int main(){
    int num = 0;
    printf("Enter Number:");
    scanf("%d", &num);
    printf("The number is %d\n", num);
    if(num%2 == 0)
        printf("Even");
    else
        printf("Odd");
    return 0;
}
