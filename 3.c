// Fibonacci sequence generator
#include<stdio.h>
int main()
{
    int num1 = 0, num2= 1,temp,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d, %d, ",num1,num2);
    
    for (int i = 2; i < n; i++)
    {
        temp = num1 + num2;;
        num1 = num2;
        num2 = temp;
        printf("%d, ",temp);
    }
    
    return 0;
}