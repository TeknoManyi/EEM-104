/*
 *Birden bine kadar olan sayıların kareköklerinin toplamını hesaplayım ekrana yazdıran programı yazınız
 */
#include <stdio.h>
#include <math.h>
int main() {
    double toplam=0;
    for (double i = 0; i <= 1000; i++)
        toplam=toplam+sqrt(i);
    printf("%lf\n", toplam);
}