#include <stdio.h>


void funcao(int *a, int *b, int *c, int n){

    for(int i=0; i<n;i++){
        c[i]=a[i]+b[i];
    }

    for(int i=0; i<n;i++){
        printf("%d ",c[i]);
    }


    free(a);
    free(b);
    free(c);


}

int main(){

    int n,*x1,*x2,*x3;

    scanf("%d",n);

    x1 = malloc(n*sizeof(int));
    x2 = malloc(n*sizeof(int));
    x3 = malloc(n*sizeof(int));


    for(int i=0; i<n;i++){
        scanf("%d",&x1[i]);
    }

    for(int i=0;i<n;i++){
        scanf("%d",&x2[i]);
    }


    funcao(x1,x2,x3,n);




    return 0;
}
