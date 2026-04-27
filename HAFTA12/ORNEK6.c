//Adinizi giriniz: SalihALTUN
//isim ve soyisimdeki sesli harf sayısını bulunuz
#include <stdio.h>
int sesli(char x[]);
int main() {
    char isim[50];
    printf("Adinizi giriniz: ");
    scanf("%s",&isim);
    printf("Adinizdaki sesli harf sayisi: %d ", sesli(isim));
}
int sesli(char x[50]) {
    char kh[5]={'a', 'e', 'i', 'o', 'u'};
    char bh[5]={'A', 'E', 'I', 'O', 'U'};
    int sayac=0;
    for (int i=0;i<50;i++) {
        for (int j=0;j<5;j++) {
            if (x[i]==kh[j]||x[i]==bh[j]) {
                sayac++; break;
            }
        }

    }
    return sayac;
}