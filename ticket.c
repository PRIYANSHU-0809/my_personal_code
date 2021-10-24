#include<stdio.h>
int main()
{
          int age;
          char name[20];
          char  gender[10];
          printf("Welcome to the ticketbook.com\n");
          printf("Please enter your details so that we can process your ticket .\n");

          printf("Please enter the name to be printed on the ticket.\n");
          scanf("%s",name);

          printf("Please enter your gender.\n");
          scanf("%s", gender);

          printf("Please enter your age .\n");
          scanf("%d", &age);
           
           if(age>=15)
           {
                     printf("Please wait while we are processing your ticket.....\n");
                     printf("Please! collect your ticket.\n");
                     printf("Thanks for booking ticket with ticketbook.com\n");
                     printf("Happy Journey!");


           }
           else{
                     printf("You do not require ticket to travel as you are under age.\n");

           }
           return 0;

}