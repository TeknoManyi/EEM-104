#include <stdio.h>
int main() {
    int toplam;
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0) {
            toplam = toplam + (i*i*i);
        }
    }
    printf("%d", toplam);
}