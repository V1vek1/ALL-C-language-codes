//**************basic program of function***************

// #include<stdio.h>
// void vivek();                            //Function prototype

// void vivek()
// {
//     printf("vivek kumar singh\n");       //Function definition
// }

// int main()
// {
//     vivek();                            //Function call 
//     return 0;
// }

//************Quick program*********************

// #include<stdio.h>
// void goodmorning();
// void goodafternoon();
// void goodevening();

// void goodmorning()
// {
// printf("good morning\n");
// }
// void goodafternoon()
// {
// printf("good afternoon\n");
// }
// void goodevening()
// {
// printf("good evening\n");
// }

// int main()
// {
//     goodmorning();
//     goodafternoon();
//     goodevening();
//     return 0;
// }

//************how to call functions into the function************

// #include<stdio.h>
// void goodmorning();
// void goodafternoon();
// void goodevening();

// void goodmorning()
// {
// printf("good morning\n");
// goodafternoon();
// goodevening();
// }
// void goodafternoon()
// {
// printf("good afternoon\n");
// }
// void goodevening()
// {
// printf("good evening\n");
// }

// int main()
// {
//     goodmorning();
//    // goodafternoon();
//    // goodevening();
//     return 0;
// }

//*********Calculate the area of square by library function with user input**********
// #include<stdio.h>
// #include<math.h>

// int main()
// {
//     int side;

//     printf("enter the value of side\n");

//     scanf("%d",&side);

//     //printf("The area of square is %d",side*side);

//     printf("The area of square is %f",pow(side,2));

//     return 0;
//}
//********Call by value********
// #include<stdio.h>  
// void change(int *num) {    
//     printf("Before adding value inside function num=%d \n",*num);    
//     (*num) += 100;    
//     printf("After adding value inside function num=%d \n", *num);    
// }      
// int main() {    
//     int x=100;    
//     printf("Before function call x=%d \n", x);    
//     change(&x);//passing reference in function    
//     printf("After function call x=%d \n", x);    
// return 0;  
// }

//*********Addition of 2 numbers by function*******
// #include<stdio.h>
// int sum(int a , int b);
// int main()
// {
//     int c;
//     c=sum( 3, 5);
//     printf("the sum of integer is %d\n",c);
//     return 0;
// } 
//     int sum(int a , int b)
//     {
//     int c;
//     c=a+b;
//     return c;
//     }


//*********Practice set of cwh Question no 2 convert celcius to fahrenheit****************

// #include <stdio.h>
// float convertCelFahrenheit(float c)
// {
//     return ((c * 9.0 / 5.0) + 32.0);
// }
// int main()
// {
//     float celsius, fahrenheit;
//     printf("Enter temperature in Celsius: ");
//     scanf("%f", &celsius);
//     //called function to convert celsius to fahrenheit
//     fahrenheit = convertCelFahrenheit(celsius);
//     printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
//     return 0;
// }

//**********Calculate force of attraction on a body of mass m exerted by earth
//(g=9.8./S2)********

// #include<stdio.h>
// float force(float mass);
// int main(){
//     float m;
//     printf("Enter the value of mass in kgs\n");
//     scanf("%f", &m);
//     printf("The value of force in Newton is %.2f\n", force(m)); 
//     return 0;
// }

// float force(float mass){
//     float result = mass * 9.8;
//     return result;
// }

//*********Write a program using recursion to calculate nth element of fimonacci series


// #include<stdio.h>
// void fibonacciSeries(int n)
// {
//    int a=0, b=1, c;
//    for(int i=0; i<n; i++)
//    {
//      printf("%d\t", a);
//      c = a+b;
//      a = b;
//      b = c;
//    }
// }

// int main()
// {
//    int term;

//    printf("Enter the term: ");
//    scanf("%d", &term);

//    printf("The fibonacci series is: \n");

//    fibonacciSeries(term);

//    return 0;
// }

//Write a recursive function to calculate the sum of first n natural numbers
// #include<stdio.h>
// int natural()
// int main()
// {
//    int n;
//    printf("enter the number\n");
//    scanf("%d",&n);
//    return 0;
// }
// int natural()
// {
//    int j,sum=0;
//    for ( j = 1; j<=10; j++)
//    {
//       sum=sum +j
//       printf("the sum is %d\n",sum);
//    }
   
// }


// #include <stdio.h>
// int addNumbers(int n);
// int main() {
//     int num;
//     printf("Enter a positive integer: ");
//     scanf("%d", &num);
//     printf("Sum = %d", addNumbers(num));
//     return 0;
// }

// int addNumbers(int n) {
//     if (n != 0)
//         return n + addNumbers(n - 1);
//     else
//         return n;
// }

//Write a program using function to print the following pattern
// *
// ***
// *****

// #include<stdio.h>
// int patt1();
// int patt2();
// int patt3();

// int main()
// {
//   int patt1();
//   int patt2();
//   int patt3();
//  return 0;
// }

// int patt1()
// {
// printf("*\n");
// }

// int patt2()
// {
// printf("***\n");
// }

// int patt3()
// {
// printf("*****\n");
//}


#include<stdio.h>
void printPattern(int n);
int main(){
    int n =4;
    printPattern(n);
    return 0;
}
// for n = 3
// *
// ***
// *****
// 1 - 1
// 2 - 3
// 3 - 5
// (2n-1)
void printPattern(int n){
    if (n==1){
        printf("*\n");
        return;
    }
    printPattern(n-1);
    for(int i=0;i<(2*n-1);i++){
        printf("*");
    }
    printf("\n");
}
