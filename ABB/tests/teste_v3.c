#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char line[] = "(7(5()(6))(10()(12)))";
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

    for(i=0; i<len; i++){
        if(line[i] == '(' && line[i+1] != ')'){
            
        }
    }
    
    return 0;
}