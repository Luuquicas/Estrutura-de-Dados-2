#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char palavra[] = "(7(5()(6))(10()(12)))";
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

    for(int i = 0; i<5; i++){
        printf("num %i: %i\n", i, v[i]);
    }
    return 0;
}