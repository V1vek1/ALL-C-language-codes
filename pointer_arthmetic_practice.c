//*********Addition of a int type number to a pointer********** 

//NOTE :- In c Language %u is only use for to take input in Positive Integers

// #include<stdio.h>

// int main()
// {
//     int a =3;
//     int *ptr=&a;
//     printf("the value of a is %d\n",a);
//     printf("the value of ptr is %u\n",ptr);
//     ptr++;
//     ptr=ptr+1; //aise karne se bhi jitne byte ka aapka pc h, yeh utna hi increment karega 
//     printf("the value of ptr is %u\n",ptr);
//     return 0;
// }

// #include<stdio.h>

// int main()
// {
//     float a =3.8;
//     float *ptr=&a;
//     printf("the value of a is %f\n",*ptr);
//     printf("the value of a is %f\n",a);
//     printf("the value of ptr is %u\n",ptr);
//     ptr++;
//     ptr=ptr+1;
//     printf("the value of ptr is %u\n",ptr);
//     return 0;
// }

//********Subtraction of a number to a pointer*****************

// #include<stdio.h>

// int main()
// {
//     int a =3;
//     int *ptr=&a;
//     printf("the value of ptr is %u\n",ptr);
//     ptr--;
//     printf("the value of ptr is %u\n",ptr);
//     return 0;
// }

// #include<stdio.h>

// int main()
// {
//     float a =3.8;
//     float *ptr=&a;
//     printf("the value of a is %f\n",a);
//     printf("the value of ptr is %u\n",ptr);
//     ptr--;
//     printf("the value of ptr is %u\n",ptr);
//     return 0;
// }

//*********Substraction of one array to another**********
// #include<stdio.h>

// int main()
// {
//     int arr[2];
//     arr[0]= 2;
//     arr[1]= 1;
//     printf("addition of two array is %d\n",arr[0]-arr[1]);
//     return 0;
// }

//********subtraction of one pointer from another**********
// #include<stdio.h>

// int main()
// {
//     int x = 5, y = 7;
//     int *p = &y;
//     int *q = &x;
// //  printf("p is %d\nq is %d\np - q is %d", p, q, (p - q));
//     printf("subtraction of two pointer is %u",*p-*q);
//     return 0;
// }

//********comparison of two pointer variables***********

#include<stdio.h>

int main()
{
    int *ptrA,*ptrB;

    ptrA=(int *)2;
    ptrB=(int *)3;

    printf("the value of *ptrA is %u and *ptrB is %d\n",ptrA,ptrB);

    if (ptrA<ptrB)
    {
    printf("ptrA is smaller than ptrB");
    }
    return 0;
}
