#include<stdio.h>
int main()
{

int i;

for(i=1; i<10000 ; i++) // irrespective of the the loop condition the loop will break when the condtion set for break is fulfilled
{
          printf("%d\n", i);


if(i==101){
          break;
}
}
return 0;


}