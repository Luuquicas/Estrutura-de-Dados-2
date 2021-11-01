#include "BinTree.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

// entrada 1: (7(5()(6))(10()(12)))
// entrada 2: (12(5()(6))(10()(1)))



int main(){
    char line[] = "(12(5()(6))(10()(1)))";
    int v[5];
    char brackets[14];
    BinTree* tree = BinTree_create();
    return_brackets(line, brackets);
    return_int(line, v);
    tree->root = str_to_tree(brackets, 0, v, 0);
    PrintTree(tree);
    return 0;
}