#include<stdio.h>
int main()
{
int n, i=1, table;

printf("Enter the value of n whose table you want to write.\n");
scanf("%d", &n);



while(i<=10)
{
          table=i*n;
          printf("%d\n", table);
          i++;

}
return 0;



}