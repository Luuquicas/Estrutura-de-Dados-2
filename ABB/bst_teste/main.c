#include "BinTree.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

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
    char line[4096];
    char *pt;
    int i = 0, v[10];
    BinTree *tree = BinTree_create();

    fgets(line, 4096, stdin);

    pt = strtok(line, "()");
    while(pt){
        v[i] = atoi(pt);
        pt = strtok(NULL, "()");
        i++;
    }
    
    tree->root = str_to_tree(line, v);
    PrintTree(tree);
    return 0;
}