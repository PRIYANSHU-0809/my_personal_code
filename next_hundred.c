//program to print next hundred number from the entered number 

#include<stdio.h>
int main()
{
int num, check ;

printf("Enter any number.\n");
scanf("%d", &num);
check=num;

while(check<=num+100)
{
printf("%d\n", check);
check++;


}
return 0;



}