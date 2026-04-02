#include <stdio.h>
int main() {
    char a;
    etiket:
    printf("Notu giriniz[1-5]: ");
    scanf("%d", &a);
    switch (a) {
        case 1: printf("Gecersiz"); break;
        case 2: printf("Zayif"); break;
        case 3: printf("Orta"); break;
        case 4: printf("Iyi"); break;
        case 5: printf("Pekiyi"); break;
        default: printf("Yanlis bir deger girdiniz"); goto etiket;
    }
}