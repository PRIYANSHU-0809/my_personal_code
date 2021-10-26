#include<stdio.h>
int main()
{
float income ,tax_slab_1, tax_slab_2,tax_slab_3;
int rate1=5, rate2=20 , rate3=30;
char sym='%';


printf("Enter your income .\n");

scanf("%f", &income);

tax_slab_1= 0.05*income;
tax_slab_2=0.2*income;
tax_slab_3=0.3*income;

if (income>=250000 && income<=500000)
{
          printf("You have to pay the tax of %d%c .\n ", rate1,sym);
          printf("Tax amount=%0.1f\n",tax_slab_1);
}

else if (income>=500000 && income<=1000000)
{
          printf("You have to pay the tax of %d%c .\n",rate2,sym );
          printf("Tax amount=%0.1f\n",tax_slab_2);

}

else if (income>=1000000)
{
          printf("You have to pay the tax of %d%c.\n", rate3,sym);
          printf("Tax amount=%0.1f\n",tax_slab_3);

}
else{
          printf("You don't have to pay any amount of tax.Live your life happily.\n");

}
return 0;

}