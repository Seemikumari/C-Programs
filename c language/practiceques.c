#include<stdio.h>
int main(){
    float bp,da,hra,grpay;
    printf("enter the basic salary of ramesh");
    scanf("%f",&bp);
    da=0.4*bp;
    hra=0.2*bp;
    grpay=bp+da+hra;
    printf("\n dearness allowance= %f",da);
    printf(" \n house rent allowance=%f",hra);
    printf("\n grosspay of ramesh is=%f",grpay);
    return 0;
}