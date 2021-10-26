#include <stdio.h>
#include <stdlib.h>

int main(){
    char a[] = "(7(5()(6))(10()(12)))";
    int i = 0;
    while(a){
        if(a[i] == '('){
            printf("Abriu o colchete!\n");
            int j = i+1;
            while(a[j] != '(' && a[j] != ')'){
                printf("a[j] = %c\n",a[j]);
                j++;
            }
        }
        if(a[i] == ')'){
            printf("Fechou o colchete\n");
        }
        i++;
    }
}