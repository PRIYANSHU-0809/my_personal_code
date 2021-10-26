#include<stdio.h>
int main()
{
float income ;
int rate1=5, rate2=20 , rate3=30;
char sym='%';


printf("Enter your income (in lakh).\n");

scanf("%f", &income);

if (income>=2.5 && income<=5)
{
          printf("You have to pay the tax of %d%c .\n ", rate1,sym);

}

else if (income>=5 && income<=10)
{
          printf("You have to pay the tax of %d%c .\n",rate2,sym );

}

else if (income>=10)
{
          printf("You have to pay the tax of %d%c.\n", rate3,sym);
}
else{
          printf("You don't have to pay any amount of tax.Live your life happily.\n");

}
return 0;

}