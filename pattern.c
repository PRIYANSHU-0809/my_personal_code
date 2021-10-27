
//Printing first 10 natural number

#include<stdio.h>
int main()
{
int a;

printf("Program to print natural number from 1 to 10.\n");
printf("For performing above said task press 1.\n");
scanf("%d",&a);

while (a>=1 && a<=10)
{
          printf("The number is %d.\n",a);
          a+=1;

}



}