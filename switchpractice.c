#include<stdio.h>
int main()
{int rat;
printf("Enter your experience with this hotel with the rating of 1-5.\n");
scanf("%d", &rat);

switch(rat){
case 1: printf("Thanks for your feedback.Your experience is bad.\n");
break;
case 2: printf("Thanks for your feedback.Your experience is little bit good.\n");
break;
case 3: printf("Thanks for your feedback.Your experience is good. \n");
break;
case 4: printf("Thanks for your feedback.Your experience is very much good.\n");
break;
case 5: printf("Thanks for your feedback.Your experience is amazing.\n");
break;

default: printf("Your rating is invalid.You have not given the rating between 1-5.");


}


printf("Now I understand what this switch command is doing\n");

return 0;

}
