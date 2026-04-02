#include <stdio.h>
int main() {
    int taban, us, toplam;
    printf("Sayinin tabanini giriniz: ");
    scanf("%d",&taban);
    printf("Sayinin ussunu giriniz: ");
    scanf("%d",&us);
    toplam=taban;
    for(int i=1;i<us; i++) {
        toplam=toplam*taban;
    }
    if(us!=0)
    printf("%d uzeri %d = %d",taban, us, toplam);
    else
    printf("%d uzeri %d = 1",taban, us);
}