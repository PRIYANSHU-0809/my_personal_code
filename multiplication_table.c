#include<stdio.h>
int main()
{
int a,b, product;

printf("Program will print the multiplication table.\n ");

printf("a is the value whose table you want to write and b is the multiplication factor.\n");

printf("Enter the value of a & b .\n");
scanf("%d",&a);
scanf("%d",&b);


while ( b<=10)
{
product =a*b;
printf("%d * %d= %d\n", a,b,product);

b++;

}
return 0;


}