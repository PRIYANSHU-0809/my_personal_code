#include<stdio.h>
int main()
{

          int num, i=1, sum=0, product;
      printf("Enter the value of n. \n");
      scanf("%d", &num);

while(i<=10)
{
product=i*num;
sum=sum+product ;
i++;

}
printf("The sum of the result of table is : %d",sum);

return 0;


      

}