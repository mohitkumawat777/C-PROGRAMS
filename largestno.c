#include<stdio.h>
void main(){
int a,b,c,d,e;
for(e=0; e<=10;e++){
    printf("enter the values of a,b,c & d\n");
scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
if(a>b && a>c && a>d){
    printf("a is large\n");
}
else if(b>a && b>c && b>d){
    printf("b is large\n");
}
else if(c>a && c>b && c>d){
    printf("c is larger\n");
}
else if(a==b && b==c && c==d){
  printf("all are equal\n");
}
else{
    printf("d is large\n");
}
}
}