// #include <stdio.h>

// int main()
//{
//	int a = 2;
//	float b = 3.5;
//	char c ='a';
//	int d = 4;
//
//	printf("the value of a is %d\n", a);
//	printf("the value of b is %f\n", b);
//	printf("the value of c is %c\n", c);
//	printf("the value of d is %d\n", d);
//     printf("the value of a+d is %d\n", a+d);
//	printf("the multiflication of a and d is %d\n", a*d);

//    int a;
//    int b;
//
//    printf("enter the value of a\n");
//    scanf("%d",&a);
//
//    printf("enter the value of b\n");
//    scanf("%d",&b);
//
//    printf("the sum of a and b is %d\n",a + b);

//    int a;
//    int b;
//    int c;
//
//    printf("enter the value of a\n");
//    scanf("%d",&a);
//
//    printf("enter the value of b\n");
//    scanf("%d",&b);
//
//    printf("enter the value of c\n");
//    scanf("%d",&c);
//
//    printf("the sum of a,b and c is %d\n",a + b * c);

//      int length;
//	  int breadth;
//}

//+++++++++ function practice(Q: Find the area of square)++++++++++++

// #include <stdio.h>
// #include<math.h>

// int main()
//{
//  int side;

// printf("give the value of side\n");
// scanf("%d",&side);

// printf("the area od square is %f\n",pow(side,2));

//}

//++++++++++Multiplication table of n numbers+++++++++++++++

/*#include <stdio.h>

int main()

{
int n,i;
printf("enter the value\n");
scanf("%d",&n);

for(int i=1;i<=10;i++)
{
	printf("%d\n",n*i);

}
}*/

//**********original calculator************

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
	int num1, num2, result1, M; // '%' modula int mai sirf kam karta hai 3/2
	float num3, num4, result;
	char op;

	while (1)
	{

		printf("1 for int \n 2 for float \n 3 for exit  \n");
		printf("\a");
		// 0 false 1 true
		scanf("%d", &M);

		switch (M)
		{ // case constant:
		case 1:
			printf("num1 is \n");
			scanf("%d", &num1);
			printf("operation is \n");
			scanf(" %c", &op);
			printf("num2 is \n");
			scanf("%d", &num2);
			break;
		case 2:
			printf("num3 is \n");
			scanf("%f", &num3);
			printf("operation is \n");
			scanf(" %c", &op);
			printf("num4 is \n");
			scanf("%f", &num4);
			break;
		case 3:
			exit(0);
		default:
			printf("key is not avalaible \n");
		}
		switch (op)
		{
		case '+':
			result = num3 + num4;
			printf("result is %f \n", result);
			break;
		case '-':
			result = num3 + num4;
			printf("result is %f\n", result);
			break;
		case '*':
			result = num3 * num4;
			printf("result is %f\n", result);
			break;
		case '/':
			result = num3 / num4;
			printf("result is %f\n", result);
			break;
		case '%':
			result1 = num1 % num2;

			printf("result1 is %d\n", result1);
			break;
		default:
			printf("operation is not valid");
		}

		getch();
	}
}