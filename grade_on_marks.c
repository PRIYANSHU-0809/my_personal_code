#include<stdio.h>
int main()
{

int marks;

printf("Enter your marks   .\n");

scanf("%d" , &marks);

if (marks<60 && marks>=33)
{
          printf("Your grade is F.\n");

}
else if (marks<70 && marks>=60)
{
          printf("Your grade is D.\n");
          
}
else if (marks<80 && marks>=70)
{
          printf("Your grade is C.\n");
          
}
else if (marks<90 && marks>=80)
{
          printf("Your grade is B.\n");
          
}
else if (marks<=100 && marks >=90)
{
          printf("Your grade is A.\n");
          

}

else {
          printf("Sorry! you are fail .Appear in the exam again.");

}
return 0;

}