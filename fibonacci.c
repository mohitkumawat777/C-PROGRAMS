#include<stdio.h>
void main(){
int n,a=0,b=1,loop,next;
printf("enter a number: ");
scanf("%d",&n);
printf("%d,%d",a,b);
for(loop=3; loop<=n ; loop++){
next=a+b;
printf(",%d",next);
a=b;
b=next;
getc;
   }
}