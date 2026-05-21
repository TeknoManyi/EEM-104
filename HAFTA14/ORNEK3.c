#include <stdio.h>
#include <stdlib.h>
int main () {
    FILE *Dosya;
    Dosya=fopen("C:\\Users\\tekno\\test3.txt","w");
    int deger, adet;
    printf("Kac adet sayi girmek istiyorsunuz?");
    scanf("%d",&adet);
    for (int i=1; i<=adet; i++) {
        printf("%d. sayiyi giriniz:",i);
        scanf("%d",&deger);
        fprintf(Dosya,"%d. sayi: %d \n",i, deger);
    }
    fclose(Dosya);
    printf("Dosyaya yazma islemi basarili\n");
    printf("Dosya aciliyor\n");
    system("C:\\Users\\tekno\\test3.txt");
}
