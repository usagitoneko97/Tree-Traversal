#include "NodePrint.h"
#include "Node.h"

void printInt(Node *node){
  printf("%d\n", node->data);
}

void printDecoratedInt(Node *node){
  printf("(***)%d\n", node->data);
}

void printStr(Node *node){
  printf("%s\n", node->data);
}
