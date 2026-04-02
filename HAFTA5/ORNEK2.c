#include <stdio.h>
int main() {
    int toplam=0; int i=1;
    do{
        if (i % 3 == 0) {
            toplam = toplam + (i*i*i);
        }
        i++;
    }while (i <=10);

    printf("%d", toplam);
}