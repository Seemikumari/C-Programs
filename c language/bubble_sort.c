#include<stdio.h>
void print_array(int *a,int n){
    for(int i;i<n;i++){
        printf("%d",a[i]);}
        printf("\n");
    }
void bubble_sort(int *a,int n){
    int temp;
    int is_sorted=0;
    for(int i =0;i<n-1;i++){
        printf("number is %d \n", i+1);
        for(int j =0;j<n-1;j++){
            if (a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    } 
}
void bubble_sort_adaptive(int*a,int n){
    int temp;
    int is_sorted=0;
    for(int i = 0; i<n-1; i++){
        printf("number is %d \n", i+1);
        is_sorted=1;
        for (int j=0;j<n-1-i;j++){
            if (a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                is_sorted=0;
            }
        }
        if(is_sorted){
            return 0;
        }
    }

}