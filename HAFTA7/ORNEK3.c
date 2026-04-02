#include <stdio.h>
main() {
    int terim; int ilk=1; int ikinci=1; int toplam;
    printf("Kac terim istersiniz: ");
    scanf("%d",&terim);
    printf("%d fibonacci serisi: ", terim);
    for(int i=1; i<=terim; i++) {
        printf("%d ",ilk);
        toplam=ilk+ikinci;
        ilk=ikinci;
        ikinci=toplam;
    }
}