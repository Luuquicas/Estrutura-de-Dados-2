#ifndef BINTREE_H
#define BINTREE_H
#include <stdbool.h>

typedef struct no{
    int key;
    struct no *left,
              *right,
              *p;//Parent
}TNo;

typedef struct{
    TNo *root;
}BinTree;

BinTree* BinTree_create();
TNo* TNo_createNFill(int);
_Bool BinTree_insert(BinTree*, int);

void BinTree_preorder(TNo*);
void BinTree_inorder(TNo*);
void BinTree_posorder(TNo*);
int altura(TNo*);

#endif