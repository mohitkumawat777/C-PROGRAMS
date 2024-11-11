#include<stdio.h>
void main(){
    int workout,a;
    printf("Enter the number from 1 to 7\n1.MONDAY\n2.TUESDAY\n3.WEDNESDAY\n4.THRUSDAY\n5.FRIDAY\n6.SATURDAY\n7.SUNDAY\n");
    for(a=1;a<=8;a++){
    scanf("%d",&workout);
    switch (workout)
    {
    case 1:printf("MONDAY: Back & Biceps");
        break;
    case 2:printf("TUESDAY: Triceps & Chest");
        break;
    case 3:printf("WEDNESDAY: Legs & Shoulders");
        break;
    case 4:printf("THURADAY: abs ");
        break;
    case 5:printf("FRIDAY: Biceps & Back");
        break;
    case 6:printf("SATURDAY: Chest & Triceps");
        break;
    case 7:printf("SUNDAY: Rest ~~");
        break;
    default:printf("no workout plan ");
        break;
    }
    }
}