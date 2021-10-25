#include<stdio.h>
int main()

{
int mon;
printf("Enter months in form of number from 1-12.\n");
scanf("%d", &mon);

if(mon==1){
printf("The number of days in January is 31.\n");
}

else if(mon==2){
          printf("The number of days in February is 28 if year is not leap and 29 if year is leap.\n");

}
else if(mon==3){
          printf("The number of days in March is 31.\n");

}
else if(mon==4){
          printf("The number of days in April is 30.\n");

}
else if(mon==5){
          printf("The number of days in May is 31.\n");

}
else if(mon==6){
          printf("The number of days in June is 30.\n");

}
else if(mon==7){
          printf("The number of days in July is 31.\n");

}
else if(mon==8){
          printf("The number of days in August is 31.\n");

}
else if(mon==9){
          printf("The number of days in September is 30.\n");

}
else if(mon==10){
          printf("The number of days in October is 31.\n");

}
else if(mon==11){
          printf("The number of days in November is 30.\n");

}
else if(mon==12){
          printf("The number of days in December is 31.\n");

}
printf("In this way you can calculate ");

return 0;



}
