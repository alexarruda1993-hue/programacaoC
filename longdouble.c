#include <stdio.h>

int main(){
    double numeropreciso = 3.141592653589793;
    long double numeromuitopreciso = 3.141591653589793238463;

    printf("Número preciso (double): %.15f\n", numeropreciso);
    printf("Número muito preciso (long double): %.21Lf\n", numeromuitopreciso);

    return 0;

}