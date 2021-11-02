#include<stdio.h>
int main()
{
int n, i , table;

printf("Enter the value of n whose table you want to print.\n");
scanf("%d", &n);

for(i=10; i>0 ;i-- )
{
table=i*n;

printf("%d\n",table);

}


}