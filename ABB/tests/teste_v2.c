#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// correta

int main(){

    char line[] = "(7(5()(6))(10()(12)))";
    int len = strlen(line);
    char *pt;
    int v[10];
    char v1[50][50];
    int i = 0;

    pt = strtok(line, "(");
    while(pt){
        strcpy(v1[i], pt);
        pt = strtok(NULL, "(");
        i++;
    }

    for(i=0; i<5; i++){
        v[i] = atoi(v1[i]);
    }

    for(int i = 0; i<7; i++){
        printf("num %i: %s\n", i, v1[i]);
    }
    return 0;
}