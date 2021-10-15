#include "BinTree.h"
#include <stdio.h>

void PrintTree(BinTree* tree){
    printf("Preorder: ");
    BinTree_preorder(tree->root);
    printf("\nInorder: ");
    BinTree_inorder(tree->root);
    printf("\nPosorder: ");
    BinTree_posorder(tree->root);
}

int main(){
    int v[] = {15, 13, 5, 8, 18, 16, 30, 1};
    BinTree *tree = BinTree_create();
    for(int i=0; i<6; i++)
        if(!BinTree_insert(tree, v[i]))
            printf("Não consegui inserir o v[%d] = %d\n", i, v[i]);
    PrintTree(tree);
    int h = altura(tree->root);
    printf("\nAltura: %i", h);
    return 0;
}