#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a number: ");
    scanf("%d",&a);
    c=1;
    for(b=1; b<=a; b++){
c=c*b;
    }
    printf("%d",c);
    return 0;
}