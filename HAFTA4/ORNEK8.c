#include <stdio.h>
int main() {
    int a,b,c,bos;
    printf("1. sayiyi giriniz");
    scanf("%d", &a);
    printf("2. sayiyi giriniz");
    scanf("%d", &b);
    printf("3. sayiyi giriniz");
    scanf("%d", &c);
    if (a>b)
    {
        bos=a; a=b; b=bos;
    }
    if (a>c)
    {
        bos=a; a=c; c=bos;
    }
    if (b>c)
    {
        bos=b; b=c; c=bos;
    }
    printf("Siralama %d %d %d seklindedir", a, b, c);


}