#include<stdio.h>
int main() {
    int sayi1,sayi2, sonuc;
    printf("1. sayiyi giriniz:");
    scanf("%d", &sayi1);
    printf("2. sayiyi giriniz:");
    scanf("%d", &sayi2);
    sonuc=(sayi1%sayi2);
    if (sonuc==0) {
        printf("Tam bolunur");
    }
    else {
        printf("Tam bolunmez");
    }

}