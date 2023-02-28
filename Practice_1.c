//Question 1

// #include<stdio.h>

// int main()
// {
//     //Write a program to calculate the area of rectangle
//     float l=10,b=12;
//     printf("the area of rectangle is %.0f",l*b);
//     return 0;
// }

// int main()
// {
//     //Write a program to calculate the area of rectangle by user input 
//     float l,b;
//     printf("Enter the value of l and b");
//     scanf("%f %f",&l,&b);
//     printf("the area of rectangle is %.2f",l*b);
//     return 0;
// }

//Write a program to calculate the average of 3 numbers
// #include<stdio.h>

// int main()
// {
//     int a=1,b=2,c=3;
//     printf("Averge is %d",(a+b+c)/3);
//     return 0;
// } 

//****************Calculate the area and peremeter of square by user******************

#include<stdio.h>

int main()
{
    float a;
    float b;

    printf("Enter the length and Breath \n");
    scanf("%f%f",&a,&b);
    
    printf("The area of square is %f %f",a*b);
    
    return 0;
}