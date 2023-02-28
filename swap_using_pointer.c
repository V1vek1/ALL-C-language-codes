#include<stdio.h>
void swappointer(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=3,b=4;
    printf("the value of a and b before swap is %d %d\n",a,b);
    swappointer(&a,&b);
    printf("the value of a and b After swap is %d %d\n",a,b);
    return 0;
}