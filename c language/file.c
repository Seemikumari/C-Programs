#include<stdio.h>
int main(){
    int a,b;
    float average;
    printf("enter the two numbers a and b\n");
    scanf("%d,%d",&a,&b);

    
    average=(a+b)/2;
    printf("the avg of two numbers are:%d",a,b,average);
    return 0;
}