#include <stdio.h>
int main() {
    int sayi; double faktoriyel=1;
    printf("Faktoriyel icin sayi girinz:", sayi);
    scanf("%d", &sayi);
    for (int i = 1; i <= sayi; i++) {
        faktoriyel = faktoriyel*i;
        printf("%d Faktoriyel:%.0lf\n", i, faktoriyel);
    }

}
