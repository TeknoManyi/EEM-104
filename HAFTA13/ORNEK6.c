#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
    int a,b;
    int rast=0;
    int kayit=0;
    etiket:
    printf("Bir sayi araligi giriniz: ");
    scanf("%d %d",&a,&b);
    srand(time(NULL));
    for(;;)
    {
        kayit=kayit+1;
        rast=rand();
        if(a==b)
        {
            printf("Benzer Sayilar Girdiniz. Tekrar Deneyiniz. \n");
            goto etiket;
        }
        if((b-a)==1)
        {
            printf("Girdiginiz sayilar arasinda tamsayi bulunmamaktadir. Tekrar Deneyiniz. \n");
            goto etiket;
        }
        if(rast>a && rast<b)
            break;
    }
    printf("rast=%d\n",rast);
    printf("kayit=%d\n",kayit);
}