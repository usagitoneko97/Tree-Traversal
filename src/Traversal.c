#include "Traversal.h"
#include "Node.h"
#include <stdio.h>



void _inOrderTreeTraversal(Node *node, void (*print)(Node *node)){
  if(node->left!=NULL)
    _inOrderTreeTraversal(node->left, print);
  // printf("data = %d\n", node->data);
  print(node);
  if(node->right!=NULL)
    _inOrderTreeTraversal(node->right, print);
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
