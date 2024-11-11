#include<stdio.h>
int main(){
int n,orignal,rem,reverse;
printf("enter a number: ");
scanf("%d",&n);
orignal=n;
while(n!=0){
rem=n%10;
reverse=reverse*10+rem;
n=n/10;
}
if(orignal == reverse){
    printf("this is equal to orignal number");
}else{
    printf("this is not equal to orignal number");
}
return 0;
}
