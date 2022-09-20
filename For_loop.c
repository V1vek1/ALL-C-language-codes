//#include <stdio.h>
//#include <stdlib.h>

//*************Note : The for-loop must have two semi-colons between the opening and closing parenthesis.***********

//*********Code prints the numbers from 8 to 80 in steps of 8***************

 /*int main()
{
	for(int x = 8; x < 88 ; x += 8)
  {
  printf("%d\n",x);
  }
}*/

//**************code prints: 66, 60, 54, 48, 42, 36, 30, 24, 18, 12, 6, 0***********

//***************1. Write a program in C to display the first 10 natural numbers.******************

/*#include<stdio.h>
int main()
{
	int n, a;
	printf("enter the no\n");
	scanf("%d",&n);
	
	for(a=0;a<=n;a++)
	{
		printf("your no is %d\n",a);
	}
}*/

//***********************Write a C program to find the sum of first 10 natural numbers.***********************

/*#include <stdio.h>
void main()
{
    int  j, sum=0;

    printf("The first 10 natural number is :\n");
 
    for (j = 1; j <= 10; j++)
    {
        sum = sum + j;
        printf("%d ",j);    
    }
    printf("\nThe Sum is : %d\n", sum);
}*/

//*************3. Write a program in C to display n terms of natural number and their sum.*************

/*#include<stdio.h>
void main()
{
int a,n,sum=0;
printf("enter the value of number\n");
scanf("%d",&n);

 printf("you entered the %d\n",n);
 
 for(a=1;a<=n;a++)
 {
 	printf(" %d\n",a);
 	sum+=a;
 }
 printf("addition of natural numbers is %d\n",sum);
}*/

//***************What is the Output of this code*********************

/*#include<stdio.h>

int main()
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d\n",i++);
		i=++i;
	}
	return 0;
}*/

//************************************************************************

/*#include<stdio.h>
int main()
{
	int max = 5;
	int i = 0;
	for(;;)          
	{
		i++; // after doing dry run....i see yaha per infinite loop me chala gya.......Ex:-1,2,3,4,5...uske baad
		// i>max hone ke baad break kar gya phir i ki value print ho gya jo ki 5 hoga.....
				
		if(i> max)
			break;
		printf("i = %d\n",i);
	}
	return 0;
}*/

//*************************************************************************

/*#include<stdio.h>
int main()
{
	int max = 5;
	int c = 0;
	for(; c <max;c++);
	{
		printf("%d ",c);
	}
	printf("END\n");
	return 0;
}*/

//**************************************************************************

/*#include<stdio.h>
int main()
{
	int i=5;
	for (; 0; i--)  //Variables ‘i’ is initialized before for loop to ‘5’, condition 
 //is FALSE always as ‘0’ is provided that causes NOT to execute loop statement, iteration is decrement of counter variable ‘i’.
	{
		printf("%d\n",i);
	}
	return 0;
}*/

//**************************************************************************
#include<stdio.h>

int main()
{
	int i,k;
	for (i=0, k=0; (i< 5 && k < 3); i++, k++)
	{
		;
	}
	printf("%d\n",i);
	
	return 0;
}

