#include<stdio.h>
main(){
	int elm_say;
	printf("kac elemanli bir dizi tanimlamak istiyorsunuz: ");
	scanf("%d",&elm_say);
	int x[elm_say];
	for(int i=0; i<elm_say; i++){
		printf("Dizinin %d'ninci elemani x[%d]degerini giriniz:",i+1,i);
		scanf("%d",&x[i]);
	}
	for(int i=0; i<elm_say; i++){
		printf("girilen x[%d] degeri %d'dir\n",i,x[i]);
	
	}
	
}
