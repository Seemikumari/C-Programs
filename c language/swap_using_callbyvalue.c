#include<stdio.h>
void swap(int,int);
int main(){
    //int x,y;
    //printf("enter the value of x and y\n");
    //scanf("%d,%d",&x,&y);

    //printf("before swapping \n x=%d\ny=%d\n",x,y);
   //// swap(x,y);
   //// printf("after swapping \n x=%d\ny=%d\n",x,y);
    //return 0;
   // }
   // void swap(int a,int b){
   //     int temp=b;
   //     b=a;
   //     a=temp;
   //     printf("values of a and b is %d  %d \n", a,b);
//
   // }
   int a=10,b=20;
   swap(a,b);
   printf("a=%db=%d\n",a,b);
   return 0;
}
void swap(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("x=%d y=%d\n", x,y);
}