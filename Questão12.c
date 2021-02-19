/* Segundo o Site Liguagem c, "O ponteiro na função pode ser utilizado como Passagem por referência – É passada para a função uma referência da variável, sendo possível alterar 
o conteúdo da variável original usando-se esta referência. Na linguagem C a passagem por referência é implementada com o uso de ponteiros. Usando ponteiros 
(também chamados de apontadores) é possível alterar os valores das variáveis passadas como argumentos para uma função."*/

/*No exemplo abaixo um programa implementado para fazer a troca de variáveis pelo endereço de memória*/

#include <stdio.h>

void troca(int *a,int *b){
 int aux=0;

 aux=*a;
 *a=*b;
 *b=aux;

}

int main(){

   int a=2,b=3;

   troca(&a,&b);

   printf("a = %d e b =%d",a,b);



    return 0;

}
