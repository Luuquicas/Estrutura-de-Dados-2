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
    int v[] = {10, 1, 2, 14, 16, 13};
    BinTree *tree = BinTree_create();
    for(int i=0; i<6; i++)
        if(!BinTree_insert(tree, v[i]))
            printf("Não consegui inserir o v[%d] = %d\n", i, v[i]);
    PrintTree(tree);
    return 0;
}