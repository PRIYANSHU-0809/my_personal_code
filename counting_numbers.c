#include<stdio.h>
int main()
{int num ;

printf("Enter any number.\n");

scanf("%d", &num);

if (num<10)
{
          printf("Number of digit in the entered number is 1 .\n");

}

else if (num>=10 && num<100)
{
          printf("The number of digit in the entered number is 2 . \n");

}

else if (num>=100 && num<1000)
{
          printf("The number of digit in the entered number is 3 . \n");

}

else if (num>=1000 && num<10000)
{
          printf("The number of digit in the entered number is 4 . \n");

}

else if (num>=10000 && num<100000)
{
          printf("The number of digit in the entered number is 5 . \n");

}

else if (num>=100000 && num<1000000)
{
          printf("The number of digit in the entered number is 6 . \n");

}

else if (num>=1000000 && num<10000000)
{
          printf("The number of digit in the entered number is 7 . \n");

}

else if (num>=10000000 && num<100000000)
{
          printf("The number of digit in the entered number is 8 . \n");

}
else if (num>=100000000 && num<1000000000)
{
          printf("The number of digit in the entered number is 9 . \n");

}
else if (num>=1000000000 && num<10000000000)
{
          printf("The number of digit in the entered number is 10 . \n");

}

return 0;

}