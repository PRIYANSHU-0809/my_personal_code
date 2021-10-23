#include<stdio.h>
int main()


{
int year;
 printf("Enter the year .\n");
 scanf("%d", &year);
 if (year%4==0)
 {
           printf("Entered year is leap.\n");
 }
 else{
           printf("Entered year is not a leap.");
 }
 

 return 0;

}
