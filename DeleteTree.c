#include<stdio.h>

struct node{
    int data;
    struct node *right;
    struct node *left;
};

struct node* newNode(int data){
    struct node *node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}

void deleteTree(struct node *tree){
    struct node *node = (struct node*)malloc(sizeof(struct node));
    if(node == NULL) return;

    deleteTree(node->left);
    deleteTree(node->right);

    free(node);
}

int main(){
    printf("\n Hello streaming from discord !");
    return 0;
}
