#include<stdio.h>
#include<string.h>
int main(){
    char cidade[30];
    int curitiba, maringa, londrina, pinhais, chapeco, joinvile, blumenau, florianopolis, portoAlegre, gramado;
    printf("Digite a cidade(sem acentos e com iniciais maiusculas, por favor): ");
    scanf("%[^\n]s", &cidade);//essa funcao auxilia na leitura de frases que contenham espacos
    curitiba=strcmp(cidade,"Curitiba");
    maringa=strcmp(cidade,"Maringa");
    londrina=strcmp(cidade,"Londrina");
    pinhais=strcmp(cidade,"Pinhais");
    chapeco=strcmp(cidade,"Chapeco");
    joinvile=strcmp(cidade,"Joinvile");
    blumenau=strcmp(cidade,"Blumenau");
    florianopolis=strcmp(cidade,"Florianopolis");
    portoAlegre=strcmp(cidade,"Porto Alegre");
    gramado=strcmp(cidade,"Gramado");
	if(curitiba==0||maringa==0||londrina==0||pinhais==0){
		printf("Pertence ao PR\n");
		if(curitiba==0){
			printf("Eh capital\n");
		}else{
			printf("Nao eh capital\n");
		}
	}else if(chapeco==0||joinvile==0||blumenau==0||florianopolis==0){
		printf("Pertence a SC\n");
		if(florianopolis==0){
			printf("Eh capital\n");
		}else{
			printf("Nao eh capital\n");
		}
	}else if(portoAlegre==0||gramado==0){
		printf("Pertence ao RS\n");
		if(portoAlegre==0){
			printf("Eh capital\n");
		}else{
			printf("Nao eh capital\n");
		}
	}else{
		printf("essa cidade nao esta no conjunto de cidades permitidas");
	}
    return 0;
}
