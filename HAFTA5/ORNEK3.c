#include <stdio.h>
int main() {
    int toplam=0; int i=1;
    while (i<=10) {
        if (i % 3 == 0) {
            toplam = toplam + (i*i*i);
        }
        i++;
    }
    printf("%d", toplam);
}