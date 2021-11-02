#include<stdio.h>
int main()
{
int i,n,factorial=1;
printf("Enter the value of number whose factorial you want to calculate.\n");
scanf("%d",&n);

for (i=1; i<=n ; i++)
{
factorial=factorial*i;



}
printf("The factorial of entered number is: %d ", factorial);

return 0;


}