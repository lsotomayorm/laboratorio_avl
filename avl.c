#include<stdio.h>
#include<stdlib.h>
#include "avl.h"

struct AVL* newNode(int data){
  struct AVL* node = malloc(sizeof(struct AVL));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  node->parent = NULL;
  return node;
}

struct AVL* insertBST(struct AVL* node, int data){
  if(!node)
    return newNode(data);
  if(data < node->data){
    node->left = insertBST(node->left, data);
    node->left->parent = node;
  }else{
    node->right = insertBST(node->right, data);
    node->right->parent = node;
  }
  return node;
}

