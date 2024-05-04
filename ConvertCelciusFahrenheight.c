#include<stdio.h>

int main ()
{
    int celsius=0, result=0 ;
    printf("enter degree centigrade");
    scanf("%d",&celsius);

    result= celsius * 9/5+32; 
    printf("fahrenheit: %d", result);

}