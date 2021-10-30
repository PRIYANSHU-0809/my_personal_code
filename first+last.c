//program which prints sum of first and last digit of entered number

#include<stdio.h>
int main()
{

int num, first , last, sum;

printf("Enter any number .\n");
scanf("%d", &num);

last= num%10;

printf("The last digit of the entered number is : %d\n", last);


first=num;

while(first>=10)
{
          first=first/10;

}
printf("The first digit of the entered number is : %d\n", first);

sum= first+last;

printf("The sum of the first and last digit of the entered number is : %d\n", sum);

return 0;


}