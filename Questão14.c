#include <stdio.h>
#include <stdlib.h>


//função para fazer a ordenação do vetor
void qsorte(float *v, int tam){

//criando auxiliar para troca
int aux=0;
    
    //primeiro for para percorrer os valores do vetor da esquerda para direira
     for(int i=0;i<tam;i++){
    //segundo for para percorrer os valores do vetor da direita para esquerda
       for(int j=tam-1;j>=i;j--){
            //se o valor do vetor da esquerda for maior ou igual ao valor do vetor da direita --> vai trocar
            if(v[i]>=v[j]){
                //logica de troca
                aux = *v[i];
                *v[i]=*v[j];
                *v[j]=aux;
            }
     }
     }

}


int main(void){

    float *x;//criação vetor tipo float
    int n;//criação valor n do vetor
    
    scanf("%d",n);//atribuindo um valor a n inteiro

    x = malloc(n*sizeof(float)); //malloc para alocação dinâmica

    //for para digitar os valores a serem armazenados no vetor x
    for(int i=0;i<n;i++){
        scanf("%f",&x[i]);

    }
    
    //chamando função qsorte para fazer a ordenação do vetor
    qsorte(x,n);

    //for para imprimir o novo vetor ordenado
    for(int i=0;i<n;i++){
        printf("%.f ",x[i]);

    }

    //liberando a memoria do vetor
    free(x);

    return 0;

}
