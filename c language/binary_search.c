#include<stdio.h>
int Binary_search(int arr[],int size,int element)
{
    int low,high,mid;
    low=0;
    high=size-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==element){
            return mid;}
            if(arr[mid]<element){
                low=mid+1;
            }
            if(arr[mid]>element){
                low=mid-1;

        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(int);
    int element=5;
    int search = Binary_search( arr,size,element);
    printf("the element %d was found at index %d\n", element,search);
    return 0;
}
