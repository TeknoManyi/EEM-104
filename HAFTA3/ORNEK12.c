#include<stdio.h>
int main () {
    int x,y,z;
    printf("Sayilari giriniz: ");
    z=scanf("%d-%d",&x, &y); // max 2 sayı tutar çünkü 2 adet değişken var
    printf("Girilen bilgi sayisi=%d",z);
}