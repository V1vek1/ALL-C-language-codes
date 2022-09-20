#include <stdio.h>
#include <stdlib.h>

#include<stdio.h>
#include <conio.h>
void main()
{
	int num1,num2,result1,M ;     // '%' modula int mai sirf kam karta hai 3/2  
	float num3,num4,result;
	char op;
    
    while(1) 
    {
    	
	printf("1 for int \n 2 for float \n 3 for exit  \n");
	printf("\a");
	                                                                                       // 0 false 1 true
	scanf("%d",&M);
	
	switch(M)
	{                                                    // case constant:
		case 1: 
		printf("num1 is \n");
		scanf("%d",&num1);
		printf("operation is \n");
		scanf(" %c",&op);
		printf("num2 is \n");
		scanf("%d",&num2);
		break;
		case 2:
			printf("num3 is \n");
			scanf("%f",&num3);
			printf("operation is \n");
		    scanf(" %c",&op);
			printf("num4 is \n");
			scanf("%f",&num4);
			break;
		case 3: exit(0);
			default:
				printf("key is not avalaible \n");
			
	}
    switch(op)
    {
    	case '+':
    		result=num3+num4;
    		printf("result is %f \n",result);
    		break;
    		case '-':
    			result=num3+num4;
    			printf("result is %f\n",result);
    			break;
    			case '*':
    			result=num3*num4;
    			printf("result is %f\n",result);
    			break; 
    			case '/':
    				result=num3/num4;
    				printf("result is %f\n",result);
    				break;
    				case '%':
    					result1=num1%num2;
    					
    					printf("result1 is %d\n",result1);
    					break;
	         default:
	         	printf("operation is not valid");
    }
    
    getch();
    
    }
}