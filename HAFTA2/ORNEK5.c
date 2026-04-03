#include <stdio.h>
#define carp(a,b) (a*b)


int main() {float sayi1,sayi2,sonuc;
    printf("1. sayiyi girin: ");
    scanf("%f",&sayi1);
    printf("2. sayiyi girin: ");
    scanf("%f",&sayi2);
    sonuc=carp(sayi1, sayi2);
    printf("Girilen sayilarin carpimi %.3f'dir",sonuc);

}