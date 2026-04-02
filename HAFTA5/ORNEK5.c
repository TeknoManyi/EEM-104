#include <stdio.h>
int main() {
    int adet;
    printf("Sayi adeti girin: ");
    scanf("%d", &adet);
    printf("Sayi\t Karesi\t Kupu\t\n");
    for (int i = 1; i <= adet; i++) {
        printf("%d\t %d\t %d\t\n", i, i*i, i*i*i);
    };
}