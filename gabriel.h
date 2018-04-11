/*Algumas das funções que uso mais*/

char *alocaString(char *);
int contChar(char []);
int compString(char [], char []);
void concatenarStrings(char [], char [], char []);

char *alocaString(char *frase){
/*Essa função recebe um frase e o aloca em 
outro de tamanho exato copia a frase pra ele 
e o retorna*/

    char *string;
    int i=0, j;
    while(frase[i]!='\0'){
        i++;
    }
    i++; //adicionando o caracter \0
    string = (char*) malloc(i*sizeof(char));
    if(string == NULL){
        exit(1);
    }
    for(j=0;j<i-1;j++){
        string[j] = frase[j];
    }
    string[i-1] = '\0';
    return string;

}

int contChar(char str[]){
	/*Numero de Caracteres que tem em uma string*/
	int quant = 0;
	while(str[quant] != '\0'){
		quant++;
	}
    quant++;
	return quant;
}

int compString(char str1[], char str2[]){

    /*compara se a string 1 é igual a string 2*/
    int i = 0, boole;
    while(str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0'){
        i++;
    }
    if(str1[i] == '\0' && str2[i] == '\0'){
        boole = 1;
    } else {
        boole = 0;
    }
    return boole;
}

void concatenarStrings(char str1[], char str2[], char str3[]){

	/*Essa função concatena a str1 com a str2 e armazena na str3 */

    int tam_str1 = 0, tam_str2 = 0, tam_str3 = 0, i;

	/*conta a str1*/
    while(str1[tam_str1] != '\0'){
        tam_str1++;
    }

	/*conta a str2*/
    while(str2[tam_str2] != '\0'){
        tam_str2++;
    }

	/*descobre o tamanho da str3*/
    tam_str3 = tam_str1 + tam_str2 + 1;

    //copia string 1
    for(i = 0; i<tam_str1; i++){
        str3[i] = str1[i];
    }

    //copia string 2
    for(i = 0; i<tam_str2; i++){
        str3[i+tam_str1] = str2[i];
    }

    str3[tam_str3-1] = '\0';

}
