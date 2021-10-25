#include<stdio.h>
int main()
{
int a, b,c;// a,b,c are the angle of the triangle of vertex A , B , C in degree

printf("Here comes the formula to check whether a triangle with given angle is valid or not.\n");
printf("Enter the angle of the vertex A.\n");
scanf("%d",&a);

printf("Enter the angle of the vertex B.\n");
scanf("%d",&b);

printf("Enter the angle of the vertex C.\n");
scanf("%d",&c);

if (a+b+c==180)
{
          printf("The triangle given is valid.\n");

}

else{
          printf("The triangle with the given vertex angle is not valid.\n");

}
 return 0;



}