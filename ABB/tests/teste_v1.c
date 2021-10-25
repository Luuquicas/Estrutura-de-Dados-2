#include <stdio.h>
#include <string.h>

int main(){
    char s[] = "(7(5()(6))(10()(12)))";
    int len = strlen(s);
    char s2[len];
    int cont = 0;
    int j=0;
    
    for(int i=0; i<len; i++){
        if(s[i] == '(' || s[i] == ')'){
            cont++;
        }else if(s[i] != '(' || s[i] != ')'){
            s2[j] = s[i];
            j++;
        }
    }

    printf("( foi repetido %i vezes na string!", cont);
    len = strlen(s2);
    for(int i=0; i<len; i++){
        printf("%c,", s2[i]);
    }
    return 0;
}