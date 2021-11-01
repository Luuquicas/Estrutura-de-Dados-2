#include "BinTree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// entrada 1: (7(5()(6))(10()(12)))
// entrada 2: (12(5()(6))(10()(1)))

void strToInt(char s[], int v[]){
    char *pt = strtok(s, "()");
    int i = 0;
    while(pt){
        v[i] = atoi(pt);
        pt = strtok(NULL, "()");
        i++;
    }
}

int main(){
    BinTree* tree = BinTree_create();
    char line[] = "(12(5()(6))(10()(1)))";
    int v[10];
    int i = 0,j = 0;

    strToInt(line, v);
    for(i=0; i<10; i++){
        printf("%d, ", v[i]);
    }
    return 0;
}