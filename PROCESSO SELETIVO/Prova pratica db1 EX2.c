#include<stdio.h>
#include<string.h>//incluiremos a biblioteca de string para manipulacao dos vetores de char
int main(){
    char texto[1000]; //o texto pode ter no maximo 1000 caracteres
    int i, tamanho, espacos=0, vogais=0;//cada auxiliar ajudara com uma contagem diferente
    printf("Digite seu texto: \n");
    fgets(texto, 1000, stdin);//esta funcao serve para ler um vetor de caracteres com espaco
    tamanho=(strlen(texto))-1;//esta funcao possibilitara a leitura do tamanho do texto
    for(i=0;i<tamanho;i++){
        if(texto[i]==' '){
            espacos++;
        }else if(texto[i]=='a'||texto[i]=='e'||texto[i]=='i'||texto[i]=='o'||texto[i]=='u'||texto[i]=='A'||texto[i]=='E'||texto[i]=='I'||texto[i]=='O'||texto[i]=='U'){
            vogais++;
        }
    }
    printf(" %d caracteres\n %d espacos em branco\n %d vogais\n", tamanho, espacos, vogais);
    return 0;
}