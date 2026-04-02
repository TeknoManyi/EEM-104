#include<stdio.h>
int main() {
    int sayi;
    printf("Pozitif bir sayi giriniz: ");
    scanf("%d",&sayi);
    printf("%d sayisinin carpanlari:", sayi);
    for(int i=1; i<=sayi; i++) {
        if(sayi%i==0) {
            printf("%d ", i);
        }
    }

}