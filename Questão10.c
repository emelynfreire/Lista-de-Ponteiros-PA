/* A maioria das respostas conferem com a teoria, o tipo int difere na teoria apresentada ocuparia 2 bytes, porém, na execução apresentou 4 bytes de ocupação na memória,
apesar disso, podemos analisar que idenpendente desso, segue-se a mesma lógica de armazanamento e operação para os tipos utilizados para teste em questão.*/

#include <stdio.h>


int main(){

    printf("--------TIPO INT--------------\n");

    int x[4];

    printf("%d\n", x+1);
    printf("%d\n", x+2);
    printf("%d\n", x+3);


    printf("--------TIPO CHAR--------------\n");

    char y[4];

    printf("%d\n", y+1);
    printf("%d\n", y+2);
    printf("%d\n", y+3);


    printf("--------TIPO FLOAT--------------\n");

    float a[4];

    printf("%d\n", a+1);
    printf("%d\n", a+2);
    printf("%d\n", a+3);


    printf("--------TIPO CHAR--------------\n");

    double b[4];

    printf("%d\n", b+1);
    printf("%d\n", b+2);
    printf("%d\n", b+3);


    return 0;


}
