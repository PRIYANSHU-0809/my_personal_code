// sum of first 10 natural number
#include<stdio.h>
int main()
{

          int n, sum;
          printf("This program prints the sum of first n natural number.\n");

          printf("Enter the value of n.\n");

          scanf("%d", &n);

          sum= (n*(n+1))/2;

          printf("The sum of first %d natural number is %d . \n", n,sum);

          return 0;
          
}