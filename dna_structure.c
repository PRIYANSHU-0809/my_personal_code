#include<stdio.h>
int main()
{
int i;

for(int i=0; i<10; i++)
{
printf("  %d\n",i);
printf(" %d %d\n",i,i);
printf("%d %d %d\n",i,i,i);
printf("%d %d %d\n",i,i,i);
printf(" %d %d\n",i,i);
printf("  %d\n",i);

}
return 0;

}