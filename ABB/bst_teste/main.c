#include "BinTree.h"
#include <string.h>
#include <stdlib.h>
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
    
    char palavra[] = "(12(5()(6))(10()(1)))";
    int len = strlen(palavra);
    char *pt;
    int v[10];
    char v1[len][len];
    int i = 0;

    pt = strtok(palavra, "()");
    while(pt){
        strcpy(v1[i], pt);
        pt = strtok(NULL, "()");
        i++;
    }

    for(i=0; i<5; i++){
        v[i] = atoi(v1[i]);
    }

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