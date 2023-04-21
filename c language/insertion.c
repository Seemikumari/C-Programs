#include<stdio.h>

void display (int arr[], int n)
//code for traversal

{
    for (int i = 0; i<n; i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}
//code for insertion
int indInsertion(int arr[],int size,int element,int capacity, int index){
    if(size>= capacity){
        return -1;
    }
    for(int i= size-1; i>=index;i++){
        arr[i+1]=arr[i];
    }  
    arr[index]=element;
    return -1;
}

int main(){
    int arr[100]={1 , 2, 6, 7 ,8};
    int size = 4,index =2, element = 17;
    display(arr,size);
    indInsertion(arr,size,element,100,index);
    size +=1;
    display(arr,size);
    return 0;

}