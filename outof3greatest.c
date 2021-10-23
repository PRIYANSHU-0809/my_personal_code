#include<stdio.h>
int main()
{
int num1, num2 , num3,max;

printf("Enter all the three numbers to be compared.\n");
scanf("%d,%d,%d", &num1,&num2,&num3);

if (num1>num2 && num1>num3)
{
max=num1;
}
else if (num2>num1 && num2>num3)
{
          max=num2;
}
else if(num3>num1 && num3>num2)
{
          max=num3;
}

printf("The maximum number out of the given three number is:%d. ", max);
return 0;

}