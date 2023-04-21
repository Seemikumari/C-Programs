#include<stdio.h>
int main(){
    int a,b;
    float  sum,average;
    printf("enter the two numbers a and b\n");
    scanf("%d,%d",&a,&b);

    sum=a+b;
    average=sum/2;
    printf("the avg of two numbers are:%d",a,b,average);
    return 0;
}