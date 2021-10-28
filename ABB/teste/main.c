#include "BinTree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// entrada 1: (7(5()(6))(10()(12)))
// entrada 2: (12(5()(6))(10()(1)))

void PrintTree(BinTree* tree){
    printf("Preorder: ");
    BinTree_preorder(tree->root);
    printf("\nInorder: ");
    BinTree_inorder(tree->root);
    putchar('\n');
}

int main(){
    BinTree* tree = BinTree_create();
    int v[7] = {12,5,0,6,10,1};
    for(int i=0; i<7; i++){
        if(!BinTree_insert(tree, v[i])){
            printf("Não consegui inserir o nó: %i\n", v[i]);
        }
    }
    PrintTree(tree);
    return 0;
}