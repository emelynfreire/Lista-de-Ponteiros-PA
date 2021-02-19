#include <stdio.h>
#include <stdlib.h>//biblioteca para poder utilizar a função quicksort


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
    
    scanf("%d",&n);//atribuindo um valor a n inteiro
    

    x = malloc(n*sizeof(float)); //malloc para alocação dinâmica
    
    //for para digitar os valores a serem armazenados no vetor x
    for(int i=0;i<n;i++){
        scanf("%f",&x[i]);
    }
    
    
    //chamando função qsorte para fazer a ordenação do vetor
    qsort(x,n,sizeof(float),compar);
    
    /*A função qsort vai possuir 4 argumentos no momentos de sua chamada:
    - base: x endereço do vetor a ser ordenado
    - n: tamanho do vetor
    - sizeof(float): tamanho de cada elemento
    - compar: ponteiro para função de comparação no qual fará a comparação repetidas fazes para ordem crescente.    
    
    */
    
    
   //for para imprimir o novo vetor ordenado
    for(int i=0;i<n;i++){
        printf("%.f ",x[i]);

    }

    //liberando a memoria do vetor
    free(x);

    return 0;

}
