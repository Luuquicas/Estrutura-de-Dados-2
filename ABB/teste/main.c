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
    char s[] = "(7(5()(6))(10()(12)))";
    BinTree* t = str_to_tree(s);
    PrintTree(t);
    return 0;
}