#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter the values of a,b &c\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("larger vlaue is: %d ",a);
        }
        else{
            printf("larger value is: %d",c);
        }
    }
    else{
          if(b>c){
            printf("larger value is: %d",b);
        }
        else{
printf("larger value is: %d",c);
        }
        }
    }
