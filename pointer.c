// #include<stdio.h>

// int main()
// {
//     int a=2;

//     printf("the value of a is %d\n",a);
//     printf("the address of a is %u\n",&a);
//     printf("the value of a is %d\n",*&a);
//     printf("the address of a is %d\n",(&a));
//     printf("the value of a is %d\n",(*&a));
//     printf("the value of a is %d\n",*(&a));
//     printf("the value of a is %u\n",*(&a));


//     return 0;
// }

//Write a program to print the address of a variable use this address to get the value of the variable********

// #include<stdio.h>

// int main()
// {
//     int c=4;
//     int *ptr;
//     ptr= c;
//     printf("the value of c is %d\n",c);
//     printf("the address of c is %u\n",&c);
//     printf("the value of c is %d\n",ptr);
//     printf("the address of c is %u\n",&ptr);
//     return 0;
// }

//Write a program having a variable i, print the address of i. pass the variable to a function
// and print its address arc these addresses

// #include<stdio.h>

// void add(int a)
// {
//     printf("the address of a is %u\n",&a);
// }
// int main()
// {
//     int i=5;
//     printf("the value of i is %d\n",i);
//     printf("the address of i is %u\n",&i);
//     add(i);


//     return 0;
// }

//Write a program to change the value of a variable to ten times of its current value.Write a 
// function and pass the value by reference.

