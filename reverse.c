#include<stdio.h>
int main()
{
int a;
printf("Program prints the number in reverse order from 1000 to 1.\n");

printf("When we are child we face problem in reverse counting but it's not the case for computers.\n");
printf("For performing the above task press 1000.\n");

scanf("%d",&a);

while (a<=1000 && a>=1){

          printf("The value of a is %d.\n", a);

          a-=1;

}

return 0;





}