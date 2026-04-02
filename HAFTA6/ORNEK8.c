#include <stdio.h>
int main() {
    int satir;
    printf("Sayi giriniz: ");
    scanf("%d",&satir);
    for (int i = 1; i <= satir; i=i+2) {
        for (int k = 1; k <= (satir-i)/2; k++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}