#include <stdio.h>
#include <stdlib.h>
int main () {
    system("C:\\Users\\tekno\\deneme7.txt");
    FILE *Dosya;
    Dosya=fopen("C:\\Users\\tekno\\deneme7.txt","a");
    int deger;
    for (int i=1; i<=5; i++) {
        printf("Sayi: ");
        scanf("%d",&deger);
        fprintf(Dosya,"%d\n",deger);
    }
    fclose(Dosya);
    system("C:\\Users\\tekno\\deneme7.txt");
}