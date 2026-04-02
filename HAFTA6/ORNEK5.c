#include <stdio.h>
int main() {
    int adet =10;
    //printf("Sayi giriniz:");
    //scanf("%d", &adet);
    for (int i = 1; i <= adet; i++) {
        for (int j = i; j >=1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
}