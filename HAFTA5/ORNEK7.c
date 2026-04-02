#include <stdio.h>
int main() {
    int adet;
    printf("Sayi giriniz:");
    scanf("%d", &adet);
    for (int i = 1; i <= adet; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
    printf("\n");
    }
}