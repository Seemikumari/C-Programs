#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{
    int data;
    struct node * left;
    struct node * right;
};

struct node  *createnode(int data){
    struct node *n; //creating a node pointer
    n=(struct node*)malloc (sizeof(struct node)); //allocating memory in the heap
    n->data=data; //setting the data
    n->left= NULL; //setting the left and right childern to null
    n->right = NULL; //setting the left and right children to null
    return n;//finally returning the create node
}

void preorder(struct node *root){
    if (root != NULL){
        printf("%d\n" , root -> data);
        preorder (root->left);
        preorder (root ->right);
          
    }
}

void postorder(struct node *root){
    if (root != NULL){
    
        postorder (root->left);
        postorder (root ->right);
        printf("%d" , root -> data);
          
    }
}


void inorder(struct node *root){
    if (root != NULL){
    
        inorder (root->left);
        printf("%d" , root -> data);
        inorder (root ->right);
    
          
    }
}



struct node * search(struct node * root , int key){
    if(root== NULL){
        return NULL;

    }
    if(key==root->data){
        return root;
    }
    else if(key<root->data){
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
}

int main(){
    //construct the root node 
    struct node * p =createnode(11);
    struct node * p1 =createnode(9);
    struct node * p2 =createnode(12);
    struct node * p3 =createnode(7);
    struct node * p4 =createnode(10);

    p->left=p1;
    p->right=p2;
    p1->left= p3;
    p1->right = p4;

   // preorder(p);
    //postorder(p);
    struct node * n= search(p,7);
    if(n!=NULL){
        printf("found %d", n->data);
    }
    else{
        printf("element not found");
    }
    

    return 0;
}

