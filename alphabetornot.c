#include<stdio.h>
int main()
{
char sym;

printf("Enter any character.\n");
scanf("%c", &sym);

if ((sym>='a' && sym<='z') || (sym>='A' && sym<='Z'))

{
printf("It is a character.");

}
else{
          printf("It is not a character.");

}
return 0;


}