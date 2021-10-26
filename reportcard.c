#include<stdio.h>
int main()
{
float physics,chemistry,math,total;

printf("Enter marks of each subject out of 100\n");


printf("Enter your physics marks\n");
scanf("%f", &physics);

printf("Enter your chemistry marks\n");
scanf("%f", &chemistry);

printf("Enter your math marks\n");
scanf("%f", &math);

total= physics+chemistry+math;

if((total<120 || physics<33 || chemistry<33 || math<33))
{
          printf("You have failed.\n");

}
else{
          printf("You have passed the examination\n");

}
return 0;



}