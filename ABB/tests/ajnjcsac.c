#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// entrada 1: (7(5()(6))(10()(12)))
// entrada 2: (12(5()(6))(10()(1)))

void return_brackets(char* s, char v[]){
    char *bracket;
    int i = 0, j = 0;

    bracket = strchr(s, '(');
    while(s[i] != '\0'){
        if(*(bracket+i) == '(' || *(bracket+i) == ')'){
            v[j] = *(bracket+i);
            j++;
        }
        i++;
    }
}

int main(){
    char line[] = "(12(5()(6))(10()(1)))";
    char v1[14];
    return_brackets(line, v1);
    
    for(int i=0; i<14; i++){
        printf("%c, ", v1[i]);
    }
    return 0;
}