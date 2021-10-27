#include<stdio.h>
int main()
{
int a;

printf("This program prints odd number from 1 to 1000.\n");

printf("For performing the above task press 1.\n");
scanf("%d", &a);

while(a<=1000){

          printf("The value of a is %d.\n",a);
          a+=2;

          }
return 0;


}