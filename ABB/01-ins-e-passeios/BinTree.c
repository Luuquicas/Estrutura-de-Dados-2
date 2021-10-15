#include "BinTree.h"
#include <stdio.h>
#include <stdlib.h>

BinTree* BinTree_create(){
    BinTree *tree = malloc(sizeof(BinTree));
    if(tree){
        tree->root = NULL;
    }return tree;
}

TNo* TNo_createNFill(int key){
    TNo* node = malloc(sizeof(TNo));
    if(node){
        node->p = NULL;
        node->left = NULL;
        node->right = NULL;
        node->key = key;
    }return node;
}

_Bool BinTree_insert(BinTree* T, int key){
    TNo* z = TNo_createNFill(key);
    if(z == NULL) return false;
    TNo* y = NULL;
    TNo* x = T->root;

    while(x){
        y = x;
        if(z->key < x->key)
            x = x->left;
        else
            x = x->right;
    }
    z->p = y;
    if(y == NULL)
        T->root = z;
    else
        if(z->key < y->key)
            y->left = z;
        else
            y->right = z;
    
    return true;
}

void BinTree_preorder(TNo* root){
    if(root){
        printf("%d, ", root->key);
        BinTree_preorder(root->left);
        BinTree_preorder(root->right);
    }
}

void BinTree_inorder(TNo* root){
    if(root){
        BinTree_inorder(root->left);
        printf("%d, ", root->key);
        BinTree_inorder(root->right);
    }
}

void BinTree_posorder(TNo* root){
    if(root){
        BinTree_posorder(root->left);
        BinTree_posorder(root->right);
        printf("%d, ", root->key);
    }
}

int altura(TNo* root){
    if(root){
        int he = altura(root->left);
        int hd = altura(root->right);
        if(he < hd) 
            return hd+1;
        else
            return he+1;
    }else{
        return -1;
    }
}