#include <stdio.h>

int main() {
    int tam = 33;
    int *tAdresDegisken;

    tAdresDegisken = &tam;

    printf("Degiskenin Degeri :  %d\n", tam);
    printf("Degiskenin Adresi :  %p\n", &tam);

    printf("İşaretcinin Değeri :  %p\n", tAdresDegisken);

    printf("tAdresDegisken Adresi :  %p\n", &tAdresDegisken);

    *tAdresDegisken = 55;

    printf("Degiskenin Nihayii Degeri :  %d\n", tam);

    return 0;
}
