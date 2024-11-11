#include<stdio.h>
void main(){
int a,b,c,d,e;
printf("enter the value of a,b,c,d & e: \n");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

if(a>b){
   if(a>c){
      if(a>d){
         if(a>e){printf("a is the largest number: %d",a);}
         else{printf("e is largest number: %d",e);}
            }
      else{printf("d is the largest number: %d",d);}
            }
   else{printf("c is thr largest number: %d",c);}
    }
else{  
    if(b>c){
      if(b>d){
        if(b>e){printf("b is the largest number: %d",b);}
         else{printf("e is largest number: %d",e);}
            }
      else{printf("d is the largest number: %d",d);}
            }
    else{
        if(c>d){
          if(c>e){printf("c is the largest number: %d",c);}
          else{printf("e is largest number: %d",e);}
               }
        else{
            if(d>e){printf("d is the largest number: %d",d);}
            else{printf("e is largest number: %d",e);}
            }
        }
    }
}