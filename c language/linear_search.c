#include<stdio.h>
int linear_search(int arr[],int size,int element){
    for (int i =0; i <size ; i++){
        if(arr[i]==element){
            return i;}}
            return -1;}

            int main(){
                int arr[]={11,8,5,76,61,9,80,12};
                int size = sizeof(arr)/sizeof(int);
                int element = 80;
                int search = linear_search(arr,size,element);
                printf("the element %d was found \n",element);
                return 0;
            }
        
    
 