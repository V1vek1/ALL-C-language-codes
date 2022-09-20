// #include <stdio.h>
// #include<conio.h>

// void main()
// {

// 	if(printf("vivek kumar singh \n"))
	
// 	return(0);
// }

// #include <stdio.h>
// int main()
// {
//     int i;
//     for(i=0; i< 5; i++)
//     {
//         if(i*i > 30 )
//         goto lbl;
//         else
//             printf("%d",i);
//     lbl:
//         printf("IHelp ");
 
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a =10;
//     if (a=11)
//     {
//        printf("i am 11");
//     }
//     else
//     {
//         printf("i ma not 11");
//     }
//}

//*******************While loop****************

// #include<stdio.h>
// int main()
// {
//     int a = 0;
//     while (a<=20)
// {
//     if (a>=10)
//     {
//         printf("all natural no is %d\n",a);
//     }
//     a++;
// }
// //return 0;
// }

//******************Do While Loop***************************
// print starting natural numbers
// #include<stdio.h>
// int main()
// {
//     int  i=0;
//     int n ;
//     printf("enter the no n \n");
//     scanf("%d",&n);

//     do
//     {
//         printf("The no is %d\n",i+1);
//         i++;
//     }
//      while (i<n);
// }


//**********************using Foor looop print n numbers of natural number*********************

// #include<stdio.h>
// int main()
// {
//     int n, a;
//     printf("enter the number\n");
//     scanf("%d",&a);

//     for ( n=0;n<=a; n++)
//     {
//         printf("this is the natural numbers %d\n",n);
//     }
// }


//***************using Foor looop print n numbers of natural number in reverse order*********************

// #include<stdio.h>
// int main()
// {
//     int a, n;
//     printf("enter the number\n");
//     scanf("%d",&a);

//     for ( n=a; n; n--)
//     {
//         printf("this is the natural numbers in reverse %d\n",n);
//     }
// }

//**************Practice of Continue statement**********************

// #include<stdio.h>

// int main()
// {
// int skip =5, i=0;

// while(i<10)
// {
//     i++;
//     if (i!=skip)
//     {
//        continue;
//     }
//     else
//     {
//         printf("%d\n",i);
//     }
// }

//*******Second program of Countinue statement*********
#include<stdio.h>

int main()
{
    int i,j;
    for (i=0;i<=2;i++)
    {
        for(j=1;j<=2;j++)
    {
    if(i==j)
    continue;
    printf("%d %d\n",i,j);
    }
    }
    return 0;
}
//Note:that when the value of i equals that of j, the continue statement takes the control to the for loop(inner)
//bypassing the rest of the statements pending execution in the for loop(inner)

//Write a program to print all prime numbers from 1 to 300
// #include<stdio.h>

// int main()
// {
//     int i,n=1;
//     for ( i=1; i <=300; i++)                                                       
//     {
//         i=2;
//         for(i=2;)
//     }
    
//     return 0;
// }