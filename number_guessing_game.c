#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
          int number , guess, repitition=1;
 
          srand(time(0));  

          number = rand()%10+1; // this line will generate a random number from 1 to 10 

          // printf("Guessed number is %d . \n", number );

do{
printf("Enter any number between 1 to 10 .\n");
scanf("%d", &guess);

if(guess>number)
{
          printf("Lower number please .\n");
}

else if (guess<number)
{
          printf("Higher number please.\n");
}


else if (guess=number)
{
          printf("You guessed it right in %d attempts .\n", repitition );

} 
repitition++;
}


while(guess!=number);

return 0;
}