#include <stdio.h>


int main(){
    int numeronormal = 2147483647; //Valor máximo de int
    long int numerogrande = 2147483647;

    printf("número regular (int): %d\n", numeronormal);
    printf("Número grande (long int): %ld\n", numerogrande);

    numerogrande = 2147483648; //Valor maior que o máximo de int
    printf("número grande atualizado (long int): %ld\n", numerogrande);

}