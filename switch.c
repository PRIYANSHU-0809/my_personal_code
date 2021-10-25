#include<stdio.h>
int main()
{
int rating ;

printf("Enter the rating of our service from 1-5\n");

scanf("%d", &rating);

switch(rating){

          case 1 :printf("Rating that you have given is 1\n");
          break;
          
case 2 :printf("Rating that you have given is 2\n");
          break;
          case 3 :printf("Rating that you have given is 3\n");
          break;
          case 4 :printf("Rating that you have given is 4\n");
          break;
          case 5 :printf("Rating that you have given is 5\n");
          break;
          default:printf("Your rating is invalid.");
}
return 0;

}