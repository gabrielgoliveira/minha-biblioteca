#include <stdio.h>
#include <stdlib.h>
//char *alocaString(char *);
void *alocaString(char *, char **);
int main(){

    char frase[1000];
    char *string;
    scanf("%[^\n]", frase);
    alocaString(frase, &string);
    printf("%s\n", string);

    return 0;
}
/*
char *alocaString(char *frase){
    char *string;
    int i=0, j;
    while(frase[i]!='\0'){
        i++;
    }

    string = (char*) malloc(i*sizeof(char));
    if(string == NULL){
        exit(1);
    }
    for(j=0;j<i;j++){
        string[j] = frase[j];
    }
    string[i] = '\0';
    return string;
        
}
*/
void *alocaString(char *frase, char **string){
    int i=0, j;
    while(frase[i]!='\0'){
        i++;
    }

    *string = (char*) malloc(i*sizeof(char));
    if(string == NULL){
        exit(1);
    }
    /*Copiando*/
    for(j=0;j<i;j++){
        *string[j] = frase[j];
    }
    string[i] = '\0';    
}