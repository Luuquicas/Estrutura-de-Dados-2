#include "BinTree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void PrintTree(BinTree* tree){
    printf("Preorder: ");
    BinTree_preorder(tree->root);
    printf("\nInorder: ");
    BinTree_inorder(tree->root);
    putchar('\n');
}

int main(){
    char line[] = "(12(5()(6))(10()(1)))";
    int len = strlen(line);
    char *pt;
    int v[10];
    char v1[len][len];
    int i = 0;
    pt = strtok(line, "()");
    while(pt){
        strcpy(v1[i], pt);
        pt = strtok(NULL, "()");
        i++;
    }
    for(i=0; i<5; i++){
        v[i] = atoi(v1[i]);
    }

    return 0;
}