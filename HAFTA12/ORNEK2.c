#include <stdio.h>
int max_bul(int,int,int);
main() {
    int a,b,c;
    printf("3 Sayi giriniz( X X X ):");
    scanf("%d %d %d",&a,&b,&c);
    printf("Girilen sayilarin buyugu %d'dir", max_bul(a, b, c));
}
int max_bul(int x,int y,int z){
    int max; max=x;
    if (y>max)
        max=y;
    if (z>max)
        max=z;
    return max;

}