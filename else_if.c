//******************Write a C program to accept two integers and check whether they are equal or not****************

/*#include<stdio.h>

int main()
{
	int sum1;
	int sum2;
	
 	printf("enter the value of sum1 and sum2\n");
 	scanf("%d %d",&sum1,&sum2);
 	
 	if(sum1 == sum2)
 	{
 	printf("two integers are same\n");
	}
	 else
	 {
	 printf("not equal\n");
     }
}*/

//*********************Write a C program to check whether a given number is even or odd**********************

/*#include<stdio.h>

int main()
{
	int a;
	printf("enter the number\n");
	scanf("%d",&a);
	
	if(a%2==0)
	{
		printf("number is even");
	
	}
	else
	{
	printf("number is odd\n");
    }
}*/

//*********************Write a C program to check whether a given number is positive or negative**************

/*#include<stdio.h>

int main()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	
	if(num>=0)
	{
	printf("number is positive\n");
    }
	else
	{
		printf("number is negative\n");
	}
}*/

//********************Write a C Program to find whether a given year is a leap year****************************

/*include<stdio.h>

int main()
{   
    int leap;
	printf("enetr the year\n");
	scanf("%d",&leap);
	
	// leap year if perfectly divisible by 400
	if(leap % 400 == 0) 
   {
      printf("%d is a leap year.", leap);
   }
   // not a leap year if divisible by 100
   // but not divisible by 400
   
    else if(leap % 100 == 0) 
    {
      printf("%d is not a leap year.", leap);
    }
    
    else if(leap%4==0)
	{
	printf("This is the leap year\n");
	}
	else
	{
		printf("this is not a leap year\n");
	}
	
}*/

//***********************Write a C program to read the age of a candidate and determine whether it is eligible for
//casting his/her own vote.***************

/*#include<stdio.h>
int main ()
{
	int vote;
	printf("enter your age\n");
	scanf("%d",&vote);

    if(vote>=18)
	{
		printf("your are eligible for voting\n");
	
	}
	else 
	{
		printf("not eligible for voting\n");
	}	
}*/

//*******************Write a C program to read the value of an integer m and display the value of n is 1 when m is 
//larger than 0, 0 when m is 0 and -1 when m is less than 0.***************************

/*#include<stdio.h>
int main()
{   
    int m; 
	int n;
	printf("enter the value\n");
	scanf("%d",&m);
	
	if(m==0)
	{
		printf("n=0\n");
	}
	else if(m>0)
	{
		printf("n=1\n");
	}
	else
	{
		printf("n=-1\n");
	}
}*/

//******************Write a C program to accept the height of a person in centimeter and categorize the person 
//according to their height*************************

/*#include<stdio.h>

int main()
{
	float height;
	printf("enter the height in centimeter\n");
	scanf("%f",&height);
	
	if(height<150.0)
	{
		printf("your are drawf\n");
	}
	else if((height>= 150.0) && (height<165.0))
	{
		printf("your height is normal\n");
	}
	else if((height>= 165.0) && (height<195.0))
	{ 
	    printf("you are taller\n");
	}
	else
	{
		printf("you are abnormal\n");
	}
}*/

//************C program to find the largest of three numbers********************

/*/#include <stdio.h>
 
 int main()
{
	int sum1;
	int sum2;
	int sum3;
	
	printf("enter the numbers\n");
	scanf("%d %d %d",&sum1,&sum2,&sum3);
    printf("1st Number %d,2nd Number %d,3rd Number = %d\n", sum1, sum2, sum3);
 
	
	if((sum1>sum2) && (sum1>sum3))
	{
		printf("number 1 is greatest\n");	
	}
	else if((sum2>sum1) && (sum2>sum3))
	{
		printf("number 2 is greatest\n");
	}
	else if((sum3>sum1) && (sum3>sum2))
	{
		printf("number 3 is greatest\n");
	}
}*/

//*******************Write a C program to accept a coordinate point in a XY coordinate system and determine in which 
//quadrant the coordinate point lies************

#include<stdio.h>

void main()
{
	float X;
	float Y;
	
	printf("Enter the Quadrant value of X and Y\n");
	scanf("%f %f",&X, &Y);
	
	if(X>0 && Y>0)
	{
		printf("this is in first Quadrant\n");
	}
	else if(X<0 && Y>0)
	{
		printf("this is the second Quadrant\n");
	}
	else if(X<0 && Y<0)
	{
		printf("this is the 3rd Quadrant\n");
	}
	else if(X>0 && Y<0)
	{
		printf("this is the 4th Quadrant\n");
	}
    else if( X == 0 && Y == 0)
    {
    	printf("This is lies at the origin.\n");
	}
}

//***********Write a C program to find the eligibility of admission for a professional course based on the following criteria.
// Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 
// or Total in Maths and Physics >=140 ------------------------------------- Input the marks obtained in Physics :65 Input the 
// marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 
// Total marks of Maths and Physics : 137 The candidate is not eligible.