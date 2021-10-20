#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
int main(){
    int num;                      
    char cNum[] = {0};            
    printf("Digite um numero: "); 
    scanf("%s%*c", cNum);         
    num = strtol(cNum, NULL, 10); 
    printf("%i", num);  
    return 0;
}*/

int main(){
    char *str1 = "frase1";
    char *str2 = "frase2";

    char buffer[100];
    strcat(strcpy(buffer, str1), str2);
    printf("%s", buffer);
    return 0;
}