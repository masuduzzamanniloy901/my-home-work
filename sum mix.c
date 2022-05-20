#include<stdio.h>
int main()
{int num1,num2;

printf("please enter the first number: ");

scanf("%d",&num1);

printf("please enter the first number: ");

scanf("%d",&num2);

printf("%d + %d=%d\n",num1,num2,num1+num2);

printf("%d - %d=%d\n",num1,num2,num1-num2);

printf("%d * %d=%d\n",num1,num2,num1*num2);

printf("%d / %d=%d\n",num1,num2,num1/num2);


 char ch;

 scanf("Enter the first letter of your name::%c\n",&ch);


 printf("The first letter of your name is:%c\n",&ch);

 ch = getchar();

 return 0;


}
