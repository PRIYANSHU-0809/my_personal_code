#include<stdio.h>
int main()
{
int A,B,C;

printf("This program will tell whether a triangle is valid or not by using its side.\n");
printf("Enter 1st side of triangle in cm. \n");
scanf("%d",&A);

printf("Enter 2nd side of triangle in cm. \n");
scanf("%d",&B);

printf("Enter 3rd side of triangle in cm. \n");
scanf("%d",&C);

if(A+B>=C && B+C>=A && A+C>=B) // the concept that I'm using here is that sum of any two sides of a triangle is always greater than or equal to the third side
{

          printf("According to side of the triangle entered it is valid.\n");

}
else{
          printf("Triangle is not valid according to the input given.");

}
return 0;


}