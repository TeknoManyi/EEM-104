#include <stdio.h>
double f_al(double); int sayi;
int main() {
    printf("Faktoriyel icin sayi girinz:", sayi);
    scanf("%d", &sayi);
    f_al(sayi);}
double f_al(double x) {
    double faktoriyel=1;
    for (int i = 1; i <= sayi; i++) {
        faktoriyel = faktoriyel*i;
        printf("%d Faktoriyel:%.0lf\n", i, faktoriyel);
    }
}