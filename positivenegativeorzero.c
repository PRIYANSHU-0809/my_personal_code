#include<stdio.h>
int main(){

          int num;
          printf("Enter the number to be compared.\n");
          scanf("%d", &num);

          if (num>0)
          {
                    printf("THE NUMBER ENTERED IS POSITIVE.");

          }

          if(num<0)
          {
                    printf("THE NUMBER ENTERED IS NEGATIVE.");

          }
          if(num==0)
          {
                    printf("THE NUMBER ENTERED IS ZERO.");

          }
          return 0;
          
}


