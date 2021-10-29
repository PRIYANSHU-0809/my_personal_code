#include<stdio.h>
int main()
{
int num , last;

printf("Enter any number.\n");
scanf("%d", &num);

last = num%10;

printf("The last digit of the number entered by user is : %d", last);

return 0;

}