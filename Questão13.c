#include <stdio.h>

void troca(float *a, float *b){

    float aux=0;

    aux = *a;
    *a = *b;
    *b = aux;
}

int main(){

    int n;

    scanf("%d",&n);//n numeros digitados para o vetor

    float *x;

    x = malloc(n*sizeof(float));

    //digitando valores no vetor
    for(int i=0;i<n;i++){
        scanf("%f",&x[i]);
    }


    //laços para organizar em ordem crescente os números
    for(int i=0;i<(n-1);i++){
        for(int j=(i+1);j<n;j++){
            if(x[i]>x[j]){
                troca(&x[i],&x[j]);
            }
        }
    }



    //for para imprimir o vetor em ordem crescente
    for(int i=0;i<n;i++){
        printf("%.f ",x[i]);
    }


    free(x);

    return 0;



}
