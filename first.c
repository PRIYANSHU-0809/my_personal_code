#include<stdio.h>
int main()
{

        int num, check;
 
        printf("Enter any number.\n");
        scanf("%d",&num);

        check=num;


        while(check>=10)
        {
                check=check/10;

        }
        printf("The first digit of the number entered is :%d", check);
return 0;

}