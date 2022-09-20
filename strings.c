// #include<stdio.h>

// int main()
// {
//     printf("There are two ways to print Strings 1st is double quates and 2nd is single colon with null character\n\n");
    
//     //char str[6]={'v','i','v','e','k','\0'};
//     char *str="Vivek";
//     printf("The value of string is %s\n",str);
//     printf("The address of str is %u\n",&str);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     char s[34];
//     printf("Enter your name: ");
//    // scanf("%s",s);    // We use when we wants only one word is print in strings
//     gets(s);            //1st:- We use when we wants multiple words in one line in strings
//     puts(s);            //2nd:- We use when we wants our Output print in new line in strings 
//     printf("Your name is %s", s);   //And this is 3rd way to print the string
//     return 0;
// }

// #include<stdio.h>
// #include <string.h>
 
// int main(){
//     printf("\n");
//     printf("You write in a two ways the strings library functions like this:-\n\n");
//     char *st = "Harry";
//     int a = strlen(st);  //1st way
//     printf("The length of string st is %d\n", a);
//     printf("The length of string st is %d\n", strlen(st)); //2nd way
    
//     return 0;
// }

// #include<stdio.h>
// #include <string.h>

// int main(){
//     char st1[45] = "Hello ";  //If you want space b/w hello vivek so, give space after the 'o' of hello
//     char *st2 = "Vivek";
//     strcat(st1, st2);
//     printf("Now the st1 is %s", st1);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>

// int main(){
//     char st1[34];
//     char st2[34];
//     // char c;
//     // int i =0;

//     printf("Enter the value of first string\n");
//     scanf("%s", st1); 
//      printf("Enter the value of second string\n");
//     scanf("%s", st2); 

    // printf("Enter the value of second string character by character\n");
    
    // while(c!='\n'){ 
    //     fflush(stdin);
    //     scanf("%c", &c); 
    //     st2[i] = c;
    //     i++;
    // }
    // st2[i-1]= '\0';

    // printf("The value of st1 is %s\n", st1);
    // printf("The value of st2 is %s\n", st2);
    // printf("strcmp for these strings returns %d", strcmp(st1, st2));

//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char st[] = "Harry";
//     int l = strlen(st);
//     printf("The length of this string is %d\n", strlen(st));
//      printf("The length of this string is %d\n",l);
//     return 0;
// }

// #include<stdio.h>  
// #include <string.h>    
// int main(){    
// char ch[9]={'o','r','i','e','n','t','a','l','\0'}; 
//   char ch2[9];       
//    char ch3[9]={'c','o','l','l','e','g','e','\0'};    
//       
//    printf("Length of string is: %d",strlen(ch));  
//    printf("Value of first string is: %s",strcpy(ch2,ch));      
//    printf("Value of second string is: %s",strcat(ch,ch3));      
//      
//  return 0;    
// }    


// #include<stdio.h>  
// #include<string.h>    
// int main()
// {    
// char st1[9]="oriental "; 
// char st2[6] = "college";  
//      char *st2 = "Vivek";
//      strcat(st1, st2);   
//    printf("Length of string is: %d",strlen(st1));             
//    printf("Value of second string is: %s",st1);          
//  return 0;    
// }    

// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char st1[9]="oriental ";
//     char st2[9]="college";
//     strcat(st1,st2);
//     printf("Length of string is: %d\n",strlen(st1));
//     printf("value of second string is: %s",st1);
//     return 0;
// }

// #include<stdio.h>  
// #include <string.h>    
// int main(){    
// char ch[5]={'G', 'a', 'm', 'e','\0'};    
//    printf("Length of string is: %d",strlen(ch));    
//  return 0;    
// }    

// #include<stdio.h>  
// #include <string.h>    
// int main(){    
//  char ch[5]={'G', 'a', 'm', 'e','\0'};    
//    char ch2[20];    
//    strcpy(ch2,ch);    
//    printf("Value of second string is: %s",ch2);    
//  return 0;    
// }    

#include<stdio.h>  
#include <string.h>    
int main(){    
  char ch[5]={'g', 'a', 'm', 'e','\0'};    
   char ch2[5]={'s', '\0'};    
   strcat(ch,ch2);    
   printf("Value of first string is: %s",ch);    
 return 0;    
}    