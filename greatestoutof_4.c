#include<stdio.h>
int main()
{
int num_1, num_2,num_3, num_4;

printf("Enter the numbers for the comparison.\n");

printf("Enter the first number.\n");
scanf("%d", &num_1);

printf("Enter the second number.\n");
scanf("%d", &num_2);

printf("Enter the third number.\n");
scanf("%d", &num_3);

printf("Enter the fourth number.\n");
scanf("%d", &num_4);

if(num_1>num_2 && num_1>num_3 && num_1>num_4)

{
          printf("First number entered is the greatest one.\n");

}

else if(num_2>num_1 && num_2>num_3 && num_2>num_4)

{
          printf("Second number entered is the greatest one.\n");
          
}

else if(num_3>num_1 && num_3>num_2 && num_3>num_4)

{
          printf("Third number entered is the greatest one.\n");
          
}

else if   (num_4>num_1 && num_4>num_2 && num_4>num_3)

{
          printf("Fourth number entered is the greatest one.\n");
          
}
return 0;

}