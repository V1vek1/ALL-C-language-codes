#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value for n : ");
    scanf("%d",&n);
    
    int fib(n)
    {
        if(n==1 || n==2)
        {
            return 1;
        }
        else
        {
            return fib(n-1)+fib(n-2);
        }
    }
n=fib(n);
printf("%d",n);
}