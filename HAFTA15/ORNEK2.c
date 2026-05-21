#include<stdio.h>
#include<stdlib.h>

int main()
{
    int adet, i;

    etiket4:
    printf("Kac adet ogrenci notu hesaplamak istiyorsunuz: ");
    scanf("%d", &adet);
    if(adet<=0){
        printf("Gecersiz sayi, tekrar deneyin.\n");
        goto etiket4;
    }

    float vize[adet], final[adet], devamsizlik[adet], donem[adet];
    char as[adet][20];
    char harf[adet][4];

    for(i=0; i<adet; i++){
        printf("%d. ogrencinin ad soyadini giriniz: ", i+1);
        scanf("%s", as[i]);

        etiket1:
        printf("%s vize notu (0-100): ", as[i]);
        scanf("%f", &vize[i]);
        if(vize[i]<0 || vize[i]>100){
            printf("Gecersiz not, tekrar girin.\n");
            goto etiket1;
        }

        etiket2:
        printf("%s final notu (0-100): ", as[i]);
        scanf("%f", &final[i]);
        if(final[i]<0 || final[i]>100){
            printf("Gecersiz not, tekrar girin.\n");
            goto etiket2;
        }

        etiket3:
        printf("%s devamsizlik (0-14): ", as[i]);
        scanf("%f", &devamsizlik[i]);
        if(devamsizlik[i]<0 || devamsizlik[i]>14){
            printf("Gecersiz deger, tekrar girin.\n");
            goto etiket3;
        }
    }

    for(i=0; i<adet; i++){
        if((int)devamsizlik[i]>13){
            donem[i]=-1;
            harf[i][0]='D'; harf[i][1]='Z'; harf[i][2]='\0';
        }
        else if(final[i]<45){
            donem[i]=0.4*vize[i]+0.6*final[i];
            harf[i][0]='F'; harf[i][1]='F'; harf[i][2]='\0';
        }
        else{
            donem[i]=0.4*vize[i]+0.6*final[i];
            if((int)donem[i]>=90){harf[i][0]='A';harf[i][1]='A';harf[i][2]='\0';}
            else if((int)donem[i]>=85){harf[i][0]='B';harf[i][1]='A';harf[i][2]='\0';}
            else if((int)donem[i]>=80){harf[i][0]='B';harf[i][1]='B';harf[i][2]='\0';}
            else if((int)donem[i]>=75){harf[i][0]='C';harf[i][1]='B';harf[i][2]='\0';}
            else if((int)donem[i]>=70){harf[i][0]='C';harf[i][1]='C';harf[i][2]='\0';}
            else if((int)donem[i]>=65){harf[i][0]='D';harf[i][1]='C';harf[i][2]='\0';}
            else if((int)donem[i]>=60){harf[i][0]='D';harf[i][1]='D';harf[i][2]='\0';}
            else{harf[i][0]='F';harf[i][1]='F';harf[i][2]='\0';}
        }
    }

    printf("Ad Soyad\tVize\tFinal\tDevamsizlik\tDonem\tHarf\n");
    for(i=0; i<adet; i++){
        if(harf[i][0]=='D' && harf[i][1]=='Z')
            printf("%s\t%.1f\t%.1f\t%.0f\t\t---\tDZ\n",as[i],vize[i],final[i],devamsizlik[i]);
        else
            printf("%s\t%.1f\t%.1f\t%.0f\t\t%.2f\t%s\n",as[i],vize[i],final[i],devamsizlik[i],donem[i],harf[i]);
    }

    FILE *dosya = fopen("ogrenci_notlari.txt","w");
    if(dosya==NULL){
        printf("Dosya acilamadi!\n");
        return 1;
    }

    fprintf(dosya,"Ad Soyad\tVize\tFinal\tDevamsizlik\tDonem\tHarf\n");
    for(i=0; i<adet; i++){
        if(harf[i][0]=='D' && harf[i][1]=='Z')
            fprintf(dosya,"%s\t%.1f\t%.1f\t%.0f\t\t---\tDZ\n",as[i],vize[i],final[i],devamsizlik[i]);
        else
            fprintf(dosya,"%s\t%.1f\t%.1f\t%.0f\t\t%.2f\t%s\n",as[i],vize[i],final[i],devamsizlik[i],donem[i],harf[i]);
    }

    fclose(dosya);
    printf("Sonuclar ogrenci_notlari.txt dosyasina kaydedildi.\n");
    return 0;
}