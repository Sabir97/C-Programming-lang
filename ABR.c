#include<stdio.h>

// ABR : Binary search Tree Data structure

typedef struct tree{
    int data;
    struct tree *left;
    struct tree *right;
}tree;

int countTreeNodes(tree *root){
    unsigned int count;
    if(root != NULL){
        count = 1;
    }
    if(root->left !=NULL){
        count++;
    }
    if(root->right != NULL){
        count++;
    }
    return count;
}

int main(){
    return 0;
}
