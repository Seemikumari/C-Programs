#include<stdio.h>
#include<stdlib.h>


struct Node *f=NULL;
struct Node  *r=NULL;

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr){
    printf("printing the elements of this linked list\n");
    while (ptr!=NULL)
    {
        printf("element : %d\n", ptr-> data);
        ptr=ptr->next;
    }
}

void enqueue (int val){
    struct node *n =(struct Node *) malloc (sizeof(struct Node));
    if(n==NULL){
        printf("queue is full");
    }
    else{
        n->data=val;
        n->next=NULL;
        if(f==NULL){
            f=r=n;
        }
        else{
            r->next =n;
            r=n;
        }
    }
}
int dequeue(){
    int val = -1;
    struct Node *ptr = f;
    if (f== NULL){
        printf("Queue is empty\n");
    }
    else{
        f=f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

int main(){
    linkedlistTravelsal(f);
    printf("dequeuing element %d\n", dequeue());
    enqueue(34);
    enqueue(4);
    enqueue(7);
    enqueue(17);
    printf("dequeuing element %d\n", dequeue());
    printf("dequeuing element %d\n", dequeue());
    printf("dequeuing element %d\n", dequeue());
    printf("dequeuing element %d\n", dequeue());
    linkedlistTravelsal(f);
    return 0;
}