#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// correta

int main(){

    char line[] = "(7(5()(6))(10()(12)))";
    int len = strlen(line);
    char *pt;
    int v[10];
    char v1[len];
    int i = 0;

    pt = strtok(line, "1234567890");
    while(pt){
        strcat(v1, pt);
        pt = strtok(NULL, "1234567890");
        i++;
    }
    printf("%s", v1);

    return 0;
}