#include<stdio.h>
void Par(int x){//foi utilizada a variavel "x" nas funcoes para a passagem dos numeros
    int auxiliar;//esta auxiliar me ajuda a gravar o resultado da soma para a comparacao no "if"
    auxiliar=x%2;
    if(auxiliar==0){
        printf(" eh par\n nao eh impar\n");//em linguagem C nao eh possivel utilizar acentos, por isso utiliza-se "h" para acentos agudos
    }else{
        printf(" nao eh par\n eh impar\n");
    }
}
void Maior(int x){
    if(x>10){
        printf(" eh maior que 10\n");
    }else{
        printf(" nao eh maior que 10\n");
    }
}
void Dobro(int x){
    int auxiliar;
    auxiliar=x*2;
    printf(" o dobro de %d eh %d\n", x, auxiliar); 
}
void primo(int x){
    int i, auxiliar1, auxiliar2=0;//("i" serve para executar o "for") auxiliar1 recebe o "resto" da divisao de x por i e auxiliar 2 indica se houve algum numero divisivel, caso haja, nao eh primo, caso nao, eh primo
    for(i=2;i<x;i++){
        auxiliar1=x%i;
        if(auxiliar1==0){
            auxiliar2++;
        }
    }
    if(auxiliar2==0){
        printf(" eh primo\n");
    }else{
        printf(" nao eh primo\n");
    }
}
int main(){
    int numero;
    printf("Digite seu numero: ");
    scanf("%d", &numero);
    Par(numero);
    Maior(numero);
    Dobro(numero);
    primo(numero);
    return 0;
}
