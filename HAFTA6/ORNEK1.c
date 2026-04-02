#include<stdio.h>
main() {
    int sayi;
    printf("Sayi giriniz:");
    scanf("%d",&sayi);
    printf("3, 5, 7 ile bolunen sayilar:\n");
    for (int i=1; i<=sayi; i++) {
        if (i%3==0&&i%5==0&&i%7==0) {
            printf("%d\n", i);
        }
    }
}