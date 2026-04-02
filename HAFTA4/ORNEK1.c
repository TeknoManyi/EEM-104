#include <stdio.h>

int main(void) {
    float vize, final;
    printf("Vize Notunu Giriniz:");
    scanf("%f", &vize);
    printf("Final Notunu Giriniz:");
    scanf("%f", &final);
    printf("Vize:%.f\n", vize);
    printf("Final:%.f\n", final);
    printf("Ortalama:%.f", (vize*0.4) + (final*0.6));


}