#include <stdio.h>
int main() {
    int gun,ay,yil;
    char aylar[12][8]={"Ocak", "Subat", "Mart", "Nisan", "Mayis", "Haziran", "Temmuz", "Agustos", "Eylul", "Ekim", "Kasim", "Aralik"};
    printf("Lutfen Tarih Giriniz(gg/aa/yyyy)");
    scanf("%d/%d/%d",&gun,&ay,&yil);

    printf("%d %s %d", gun, aylar[ay-1], yil);




}