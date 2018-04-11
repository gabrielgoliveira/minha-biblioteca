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

int contChar(char str[]){
	/*Numero de Caracteres que tem em uma string*/

	int quant = 0;

	while(str[quant != '\0']){
		quant++;
	}
	
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
