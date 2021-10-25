#include<stdio.h>
int main()
{
char sym;
printf("Enter any alphabet.\n");
scanf("%c", &sym);

if (sym>='a' && sym<='z')
{
          printf("The entered alphabet is in lower case.\n");

}
else {
          printf("The alphabet entered is in upper case.");

}
return 0;



}