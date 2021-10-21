#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char input[] = "(12(5()(6))(10()(1)))";
    char *pt;
    int i=0;
    char *v[] = { };

    pt = strtok(input, "()");
    while(pt){
        printf("Token: %s\n", pt);
        strcpy(v[i], pt);
        i++;
        pt = strtok(NULL, "()");
    }
    for(int j=0; j<5; j++){
        printf("v[%i] = %c\n", i, v[i]);
    }
    return 0;
}