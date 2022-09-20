// #include<stdio.h>

// int main()
// {
//     int a =2,3;
//     switch(a)
//     {
//         case 1:
//         {
//         printf("i am in case 1\n");
//         }
//         break;
//         case 2:
//         {
//         printf("i am in case 2\n");
//         }
//         break;
//         case 3:
//         printf("i am in case 3\n");
//         break;
//         case 4:
//         printf("i am in case 4\n");
//         break;
//     }
//     return 0;
// } 

// At times we may want to execute a common set of statements for multiple cases.
//the following example shows how this can be achieved:

#include<stdio.h>

int main()
{
    char ch;

    printf("Enter any one of the alphabets a,b or c\n");
    scanf("%c",&ch);
    switch (ch)

    {
    case 'a':
    case 'A':
    printf("a is as apple\n");
    break;

    case 'b':
    case 'B':
    printf("b is as boy\n");
    break;

    case 'c':
    case 'C':
    printf("c is as cow\n");
    break;
    
    default:
    printf("wish you knew what are alphabets\n");
    }
    return 0;
}
