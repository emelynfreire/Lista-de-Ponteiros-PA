


/*O primeiro programa imprimi os valores armazenados no vetor*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[] = {4,9,13};
    int i;
    for(i=0; i<3; i++){
        printf("%d ",*(vet+i));
    }

    return 0;
}

/* O segundo programa imprime os endereços dos valores do vetor das memórias alocadas no computador.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[] = {4,9,13};
    int i;

    for(i=0; i<3; i++){
        printf("%X ",vet+i);
    }

    return 0;
}

