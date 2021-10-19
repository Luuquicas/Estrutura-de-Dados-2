#include "BinTree.h"
#include <stdio.h>

void PrintTree(BinTree* tree){
    printf("Preorder: ");
    BinTree_preorder(tree->root);
    printf("\nInorder: ");
    BinTree_inorder(tree->root);
    printf("\nPosorder: ");
    BinTree_posorder(tree->root);
    putchar('\n');
}

int main(){
    int v[] = {12,5,6,10,1};
    BinTree *tree = BinTree_create();
    for(int i=0; i<5; i++)
        if(!BinTree_insert(tree, v[i]))
            printf("Não consegui inserir o v[%d] = %d\n", i, v[i]);
    PrintTree(tree);
    int key = 10;
    TNo* result = BinTree_search_r(tree->root, key);
    if(result){
        printf("Found %d\n", key);
        //if(!BinTree_delete(tree, result))
        //    printf("Não consegui deletar!\n");
    }else
        printf("Key %d not found\n", key);
    PrintTree(tree);
    return 0;
}