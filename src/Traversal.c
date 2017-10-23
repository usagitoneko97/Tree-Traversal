#include "Traversal.h"
#include "Node.h"
#include <stdio.h>

void inOrderTreeTraversal(Node *node){
  if(node->left!=NULL)
    inOrderTreeTraversal(node->left);
  printf("data = %d\n", node->data);
  if(node->right!=NULL)
    inOrderTreeTraversal(node->right);
}

void postOrderTreeTraversal(Node *node){
  if(node->left!=NULL)
    postOrderTreeTraversal(node->left);
  if(node->right!=NULL)
    postOrderTreeTraversal(node->right);
  printf("data = %d\n", node->data);
}

void preOrderTreeTraversal(Node *node){
  if(node!=NULL)
      printf("data = %d\n", node->data);
  if(node->left!=NULL)
    preOrderTreeTraversal(node->left);
  if(node->right!=NULL)
    preOrderTreeTraversal(node->right);
}
