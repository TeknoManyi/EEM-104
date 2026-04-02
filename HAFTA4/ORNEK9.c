#include <stdio.h>
#include <conio.h>
int main() {
    int a,b;
    //char devam;
    basla:
    printf("1. Sayiyi giriniz:");
    scanf("%d", &a);
    printf("2. Sayiyi giriniz:");
    scanf("%d", &b);
    printf("Islem operatoru giriniz:");
    //scanf(" %s", &operator);
    char operator = getche();
    switch (operator) {
        case '+': printf("\n%d + %d = %d", a, b, a + b); break;
        case '-': printf("\n%d - %d = %d", a, b, a - b); break;
        case '*': printf("\n%d * %d = %d", a, b, a * b); break;
        case '/':  printf("\n%d / %d = %d", a, b, a / b); break;
        default:printf("\nDesteklenmeyen operator");
    }
    hatali:
    printf("\nDevam etmek ister misiniz?(E/H)\n");
    //scanf(" %c", &devam);
    char devam=getche();

    if (devam=='H'|| devam=='h') {
        printf("\nTesekkurler:");
    }
    else if (devam=='E'|| devam=='e') {
        printf("\nDevam ediliyor\n");
        goto basla;
    }
    else {
        printf("\nHatali tuslama:");
        goto hatali;

    }
    }