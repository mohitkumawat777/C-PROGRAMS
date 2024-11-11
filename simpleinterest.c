// calcutaion of simple interest
#include<stdio.h>
void main(){
// P IS PRINCIPAL AMOUNT
// R IS ANNUAL INTEREST RATE
// T IS THE TIME
float p,r,t,si;
printf("Enter the principal amount: ");
scanf("%f",&p);
printf("Enter the annual interest rate: ");
scanf("%f",&r);
printf("Enter the time: ");
scanf("%f",&t);
si=(p*r*t)/100;
printf("simple interest is: $%f",si);
getc;
}