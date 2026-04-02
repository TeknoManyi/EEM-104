#include <stdio.h>
int main() {
    int a,b,c;
    printf("1. sayiyi giriniz ");
    scanf("%d",&a);
    printf("2. sayiyi giriniz ");
    scanf("%d",&b);
    c=(a<b)? a:b;
    printf("Kucuk olan sayi %d",c);
    return 0;
}