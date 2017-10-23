#include <stdio.h>
#include "unity.h"
#include "Traversal.h"
#include "Node.h"
Node node1 = {NULL, NULL, 1};
Node node3 = {NULL, NULL, 3};
Node node7 = {NULL, NULL, 7};
Node node24 = {NULL, NULL, 24};
Node node28 = {NULL, NULL, 28};

Node node2 = {&node1, &node3, 2};
Node node5 = {NULL, &node7, 5};
Node node15 = {NULL, NULL, 15};
Node node25 = {&node24, &node28, 25};

Node node4 = {&node2, &node5, 4};
Node node20 = {&node15, &node25, 20};
Node node10 = {&node4, &node20, 10};


void setUp(void){}

void tearDown(void){
  printf("--------------------\n");
}

void test_Traversal_inorder(void)
{
    inOrderTreeTraversal(&node10);
}

void test_Traversal_postOrder(void)
{
    postOrderTreeTraversal(&node10);
}

void test_Traversal_preOrder(void)
{
    preOrderTreeTraversal(&node10);
}
