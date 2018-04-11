#include <stdio.h>
#include <stdlib.h>
#include "gabriel.h"


int main(){
    int i=0;
    char frase[1000];
    char *string;
    scanf("%[^\n]", frase);
    string = alocaString(frase);
    printf("%s\n", string);
    return 0;
}

/*
void alocaString(char *frase, char **string){
    int i=0, j;
    while(frase[i]!='\0'){
        i++;
    }

    *string = (char*) malloc(i*sizeof(char));
    if(string == NULL){
        exit(1);
    }
    Copiando
    for(j=0;j<i;j++){
        *string[j] = frase[j];
    }
    string[i] = '\0';    
}
*/