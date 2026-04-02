#include <stdio.h>
int main() {
    int yas, kisi, i; float T;
    i=1; T=0;
    printf("Kisi sayisi giriniz:");
    scanf("%d", &kisi);
    geri:
    printf("%d . kisinin yasini giriniz:", i);
    scanf("%d", &yas);
    T=T+yas;
    i++;
    while (i<=kisi) {
        goto geri;
    }
    printf("Yas ortalamasi: %.f", T/kisi);

}