#include<stdio.h>
int main (){

int units;
float bill;

printf("Enter the number of Units:");
scanf("%d",& units);

if (units <= 100)
bill=units*5;
else if(units <=300)
bill = units*7;
else 
bill= units*10;
printf("Electricity bill = %.2f\n",bill);
printf("THANK YOU!!");



    return 0;

}