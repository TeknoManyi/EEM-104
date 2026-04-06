#include <stdio.h>

int main() {
    int sayi, bolen, toplam, i;
    double deger;

    printf("Bir deger giriniz: ");
    scanf("%lf", &deger); 

   
    printf("%16s %s\n", "mukemmel sayilar", "bolenleri"); 

    for (sayi = 2; sayi < deger; sayi++) {
        toplam = 1; 
        for (bolen = 2; bolen < sayi; bolen++) {
            if (sayi % bolen == 0) {
                toplam += bolen; 
            }
        }

        if (sayi == toplam) {
            printf("%16d", sayi); 
            printf("     "); 

            for (i = 1; i < sayi; i++) { 
                if (sayi % i == 0) {
                    printf("%d ", i); 
                }
            }
            printf("\n"); 
        }
    }
    return 0;
}
