/*Para poder calcular o tempo de executação utilizou-se da biblioteca time.h com a função clock, na maioria dos casos o qsort irá executar o programa mais rápido
que de outras lógicas existentes*/


#include <stdio.h>
#include <time.h>

void troca(float *a, float *b){

    float aux=0;

    aux = *a;
    *a = *b;
    *b = aux;
}

int main(){

    int n;
    clock_t tempo_inicial, tempo_final;

    scanf("%d",&n);//n numeros digitados para o vetor

    float *x;

    x = malloc(n*sizeof(float));

    //digitando valores no vetor
    for(int i=0;i<n;i++){
        scanf("%f",&x[i]);
    }

 tempo_inicial = clock();




    //laços para organizar em ordem crescente os números
    for(int i=0;i<(n-1);i++){
        for(int j=(i+1);j<n;j++){
            if(x[i]>x[j]){
                troca(&x[i],&x[j]);
            }
        }
    }


tempo_final = clock();


    float tempo = difftime(tempo_final,tempo_inicial);

    printf("tempo de execução: %f",tempo);

    free(x);

    return 0;



}



/*
-------------------QUESTÃO 14 ---------------------------
*/



#include <stdio.h>
#include <stdlib.h>//biblioteca para poder utilizar a função quicksort
#include <time.h> //biblioteca para medir tempo


//função de comparação
int compar(const void* a, const void* b){

    if(*(float*)a == *(float*)b){
        return 0;//iguais

    }else {
        if(*(float*)a < *(float*)b){

        return -1;//vem antes

        }else{

            return 1;//vem depois
        }
    }
}



int main(){

    float *x;//criação vetor tipo float
    int n;//criação valor n do vetor

    clock_t tempo_inicial, tempo_final;


    scanf("%d",&n);//atribuindo um valor a n inteiro


    x = malloc(n*sizeof(float)); //malloc para alocação dinâmica

    //for para digitar os valores a serem armazenados no vetor x
    for(int i=0;i<n;i++){
        scanf("%f",&x[i]);
    }

    //medindo tempo de execução do qsort
   tempo_inicial = clock(); //chamando função em segundos


    qsort(x,n,sizeof(float),compar);


    tempo_final = clock();//chamando função em segundos

    float tempo = difftime(tempo_final,tempo_inicial);


    printf("tempo de execução: %.f",tempo);



    //liberando a memoria do vetor
    free(x);

    return 0;

}


