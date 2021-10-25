#include<stdio.h>
#include<math.h>

int main(){

          float a,b,c, root1, root2, discriminant;

          printf("The standard form of quadratic equation is ax^2+bx+c .\n");
          printf("Enter the value of a .\n");
          scanf("%f", &a);

          printf("Enter the value of b .\n");
          scanf("%f", &b);

          printf("Enter the value of c .\n");
          scanf("%f", &c);

          printf("According to the input taken by user the quadratic expression looks like : %0.1fx^2+%0.1fx+%0.1f\n",a, b, c );

          discriminant= sqrt(b*b-4*a*c);

          if(discriminant>=0){

          printf("Discriminant of the given quadratic equation is : %0.1f\n", discriminant);

          root1= (-b+sqrt(b*b-4*a*c))/2*a  ;

          printf("1st root is : %0.1f\n ", root1);
          
          root2= (-b-sqrt(b*b-4*a*c))/2*a  ;

          printf("2nd root is : %0.1f\n ", root2);
          
          
          }
          else{
                    printf("Sorry! The value of roots for the given quadratic equation does not exist.");
          }

          
          return 0;


}