#include<stdio.h>
#include<stdlib.h>
main()
{
    FILE *Dosya;
    Dosya=fopen("C:\\Users\\tekno\\vizefinal.txt","w");
    int adet;
    char krk;
    etiket4:
        printf("Kac adet ogrenci notu hesaplamak istiyorsunuz:");
        scanf("%d", &adet);
        float notlar[adet][4];
        char as[adet][25];
    for(int i=0; i<adet; i++) {
        printf("%d. ogrencinin AdSoyadini giriniz:", i+1);
        scanf("%s", &as[i]);
        etiket1:
        printf("%s'in vize notunu giriniz:", as[i]);
        scanf("%f", &notlar[i][0]);
        if(notlar[i][0]<0 || notlar[i][0]>100) {
            printf("Gecersiz bir vize notu girdiniz, lutfen tekrar deneyin\n");
            goto etiket1;
        }
        etiket2:
        printf("%s'in final notunu giriniz:", as[i]);
        scanf("%f", &notlar[i][1]);
        if(notlar[i][1]<0 || notlar[i][1]>100) {
            printf("Gecersiz bir final notu girdiniz, lutfen tekrar deneyin\n");
            goto etiket2;
        }
        etiket3:
        printf("%s'in devamsizlik sayisini giriniz:", as[i]);
        scanf("%f", &notlar[i][2]);
        if(notlar[i][3]<0 || notlar[i][3]>14) {
            printf("Gecersiz bir devamsizlik girdiniz");
            goto etiket3;
        }
    }
    fprintf(Dosya, "AdSoyad\t Vize\t Final\t Devamsizlik\t Harf Notu\t ");
    for(int i=0; i<adet; i++) {
        notlar[i][]= 0.4 * notlar[i][0] +0.6*notlar[i][1];

        if (notlar[i][3]<5)
            if(notlar[i][2]<90 || notlar[i][2]>=100) {
            fprintf(Dosya, "%s\t%f\t%f\t%f\tAA", as[i], notlar[i][0], notlar[i][1], notlar[i][3]);
            }
            else if(notlar[i][2]<80 || notlar[i][2]>=90) {
            fprintf(Dosya, "%s\t%f\t%f\t%f\tBA", as[i], notlar[i][0], notlar[i][1], notlar[i][3]);
            }
            else if(notlar[i][2]<70 || notlar[i][2]>=80) {
            fprintf(Dosya, "%s\t%f\t%f\t%f\tBB", as[i], notlar[i][0], notlar[i][1], notlar[i][3]);
            }
            else if(notlar[i][2]<60 || notlar[i][2]>=70) {
            fprintf(Dosya, "%s\t%f\t%f\t%f\tCB", as[i], notlar[i][0], notlar[i][1], notlar[i][3]);
            }
            else if(notlar[i][2]<50 || notlar[i][2]>=60) {
            fprintf(Dosya, "%s\t%f\t%f\t%f\tCC", as[i], notlar[i][0], notlar[i][1], notlar[i][3]);
            }
            else if(notlar[i][2]<45 || notlar[i][2]>=50) {
            fprintf(Dosya, "%s\t%f\t%f\t%f\tDC", as[i], notlar[i][0], notlar[i][1], notlar[i][3]);
            }
            else {
            fprintf(Dosya, "%s\t%f\t%f\t%f\tFF", as[i], notlar[i][0], notlar[i][1], notlar[i][3]);
            }
        else {
            fprintf(Dosya, "%s\t%f\t%f\t%f\tDZ", as[i], notlar[i][0], notlar[i][1], notlar[i][3]);
        }
    }
fclose(Dosya);
    system("C:\\Users\\tekno\\vizefinal.txt");


}
/*
 * isim soyisim al
 * vize
 * final
 * devamsızlık
 * dizilerde tut
 * dönem notu hesapla
 * harf notu hesapla
 * yanlış bilgi girişi için önlem al
 *45++ ve devamsızlık 4< ise devam et hesapla
 *45-- ise ff
 *devam>4 ise dz
 *harf notu verme diğerine de
 *1. öğrencinibib adını soyadını giriniz
 */