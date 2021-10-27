#include<stdio.h>
int main()
{

          int n;
    float sum;

          printf("The program prints the sum of cube of first n natural numbers.\n");
          printf("Enter the value of n.\n");

          scanf("%d",&n);

          sum= ((n*(n+1))/2)*((n*(n+1))/2);

          printf("The sum of cube of first n natural number is %0.1f\n", sum);

          return 0;

}