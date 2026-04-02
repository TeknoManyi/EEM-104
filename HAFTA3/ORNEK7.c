#include <stdio.h>
int main() {
    float x, y, z, t, ort;
    printf("1. Sayiyi giriniz:");
    scanf("%f", &x);
    printf("2. Sayiyi giriniz:");
    scanf("%f", &y);
    printf("3. Sayiyi giriniz:");
    scanf("%f", &z);
    printf("4. Sayiyi giriniz:");
    scanf("%f", &t);
    ort=(x+y+z+t)/4;
    printf("Girilen sayilarin ortalamasi %.3f'dir", ort);

}