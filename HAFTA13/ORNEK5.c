#include<stdio.h>
#include<stdlib.h>
main()
{
    int a,b;
    int rast=0;
    int kayit=0;
    printf("Bir sayi araligi giriniz: ");
    scanf("%d %d",&a,&b);
    etiket:
        rast=rand();
    if(rast<=a || rast>=b)
    {
        kayit++;
        goto etiket;
    }
    printf("Rast:%d\nKayit:%d",rast,kayit);
}