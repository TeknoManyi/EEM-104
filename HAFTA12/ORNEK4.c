#include<stdio.h>
void kare_al(int []);
int main() {
    int a[15];
    printf("Islem oncesi degerler:\n");
    for(int i=0;i<15;i++) {
        a[i]=i+1;
        printf("%d\t",a[i]);
    }
    kare_al(a);
    printf("\nIslem sonrasi degerler:\n");
    for(int i=0;i<15;i++) {
        printf("%d\t",a[i]);
    }
}
    void kare_al(int a[]){
        for(int i=0;i<15;i++) {
            a[i]=a[i]*a[i];
        }
    }
