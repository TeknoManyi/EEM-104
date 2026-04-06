#include<stdio.h>
main()
{
	int elm_say,buyuk,kucuk;
	printf("kac elemanli bir dizi istiyorsunuz: ");
	scanf("%d",&elm_say);
	int x[elm_say];
	for (int i=0; i<elm_say; i++){
		printf("x[%d]= ",i);
		scanf("%d",&x[i]);
	}
	buyuk=x[0]; kucuk=x[0];
	for (int i=0; i<elm_say; i++){
		if(x[i]>buyuk){
			buyuk=x[i];
		}
		if(x[i]<kucuk){
			kucuk=x[i];
		}
	}
	printf("buyuk = %d \n kucuk = %d",buyuk,kucuk);
}
