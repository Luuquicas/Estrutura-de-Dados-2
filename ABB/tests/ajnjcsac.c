#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// entrada 1: (7(5()(6))(10()(12)))
// entrada 2: (12(5()(6))(10()(1)))

int main(){
    char line[4096];
    fgets(line, 4086, stdin);
    int i = 0;
    while(line[i] != '\0'){
        i++;
    }
    int tam = i;
    printf("tam: %i", tam);
    return 0;
}