#include <stdio.h>
#include <conio.h>
main()
{
	int ogrenci_sayisi;
	float donem_notu;
	char krk;
	etiket4:
		printf("Ogrenci sayisini giriniz: ");
		scanf("%d",&ogrenci_sayisi);
		float notlar[ogrenci_sayisi][4];
		char harfler[9][12]={"AA","BA","BB","CB","CC","DC","DD","FD","FF"};
		char ad_soyad[ogrenci_sayisi][20];
		for(int i=0; i<ogrenci_sayisi; i++)
		{
			printf("%d. ogrencinin adini ve soyadini giriniz: ",i+1);
			scanf("%s",&ad_soyad[i]);
			etiket1:
				printf("%s'in vize notunu giriniz: ",ad_soyad[i]);
				scanf("%f",&notlar[i][0]);
				if(notlar[i][0]<0 || notlar[i][0]>100)
				{
					printf("Gecersiz bir vize notu girdiniz. Tekrar Deneyiniz. \n");
					goto etiket1;
				}
			etiket2:
				printf("%s'in final notunu giriniz: ",ad_soyad[i]);
				scanf("%f",&notlar[i][1]);
				if(notlar[i][1]<0 || notlar[i][1]>100)
				{
					printf("Gecersiz bir final notu girdiniz. Tekrar Deneyiniz.\n");
					goto etiket2;
				}
			etiket3:
				printf("%s'in devamsizlik sayisini giriniz:",ad_soyad[i]);
				scanf("%f",&notlar[i][3]);
				if(notlar[i][3]>14)
				{
					printf("Gecersiz bir devamsizlik sayisi girdiniz. Tekrar Deneyiniz.\n");
					goto etiket3;
				}
		}
		for(int i=0; i<ogrenci_sayisi; i++)
		{
	notlar[i][2]=notlar[i][0]*0.4+notlar[i][1]*0.6;
		}
		for(int i=0; i<ogrenci_sayisi; i++)
		{
			if(notlar[i][1]>44 && notlar[i][3]<5)
			{
				if(notlar[i][2]<=20 && notlar[i][2]>=0)
				{
					printf("%s'in donem ortalamasi %f; harf notu %s 'dir. \n",ad_soyad[i],notlar[i][2],harfler[8]);
				}
				else if(notlar[i][2]<=30 && notlar[i][2]>20)
				{
					printf("%s'in donem ortalamasi %f; harf notu %s 'dir. \n",ad_soyad[i],notlar[i][2],harfler[7]);
				}
				else if(notlar[i][2]<=40 && notlar[i][2]>30)
				{
					printf("%s'in donem ortalamasi %f; harf notu %s 'dir. \n",ad_soyad[i],notlar[i][2],harfler[6]);
				}
				else if(notlar[i][2]<=50 && notlar[i][2]>40)
				{
					printf("%s'in donem ortalamasi %f; harf notu %s 'dir. \n",ad_soyad[i],notlar[i][2],harfler[5]);
				}
				else if(notlar[i][2]<=60 && notlar[i][2]>50)
				{
					printf("%s'in donem ortalamasi %f; harf notu %s 'dir. \n",ad_soyad[i],notlar[i][2],harfler[4]);
				}
				else if(notlar[i][2]<=70 && notlar[i][2]>60)
				{
					printf("%s'in donem ortalamasi %f; harf notu %s 'dir. \n",ad_soyad[i],notlar[i][2],harfler[3]);
				}
				else if(notlar[i][2]<=80 && notlar[i][2]>70)
				{
					printf("%s'in donem ortalamasi %f; harf notu %s 'dir. \n",ad_soyad[i],notlar[i][2],harfler[2]);
				}
				else if(notlar[i][2]<=90 && notlar[i][2]>80)
				{
					printf("%s'in donem ortalamasi %f; harf notu %s 'dir. \n",ad_soyad[i],notlar[i][2],harfler[1]);
				}
				else if(notlar[i][2]<=100 && notlar[i][2]>90)
				{
					printf("%s'in donem ortalamasi %f; harf notu %s 'dir. \n",ad_soyad[i],notlar[i][2],harfler[0]);
				}
			}
			else if(notlar[i][1]<45 && notlar[i][3]<5)
			{
				printf("%s'in final notu 45'in altinda oldugu icin harf notu FF'dir. \n",ad_soyad[i]);
			}
			else if(notlar[i][1]>45 && notlar[i][3]>4)
			{
				printf("%s'in devamsizligi 4 haftanin üzerinde oldugu icin harf notu NT'dir. \n",ad_soyad[i]);
			}
			else
			{
				printf("%s icin harf notu yoktur. \n",ad_soyad[i]);
			}
		}
		etiket5:
			printf("\nDevam Etmek Istiyormusunuz (E/H)");
			krk=getche();
			if(krk=='E' || krk=='e')
			{
				goto etiket4;
			}
			else if(krk=='H' || krk=='h')
			{
				printf("\nProgrami kullandiginiz icin tesekkurler...");
			}
			else
			{
				printf("\nYanlis bir karakter girdiniz. Tekrar karakter giriniz.");
				goto etiket5;
			}
}