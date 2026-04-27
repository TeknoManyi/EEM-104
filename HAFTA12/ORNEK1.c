#include <stdio.h>
float topla(float,float);
float cikar(float,float);
float carp(float,float);
float bol(float,float);
int main() {
    char krk; float a,b;
    printf("1. sayi: ");
    scanf("%f",&a);
    printf("2. sayi: ");
    scanf("%f",&b);
    printf("islem operatoru: ");
    getchar(); scanf("%c",&krk);
    if(krk=='+')
        printf("Girdiginiz sayilarin toplami: %f",topla(a,b));
    if(krk=='-')
        printf("Girdiginiz sayilarin farki: %f",cikar(a,b));
    if(krk=='*')
        printf("Girdiginiz sayilarin carpimi: %f",carp(a,b));
    if(krk=='/')
        printf("Girdiginiz sayilarin bolumu: %f",bol(a,b));

}
float topla(float x,float y) {
    return x+y;
}
float cikar(float x,float y) {
    return x-y;
}
float carp(float x,float y) {
    return x*y;
}
float bol(float x,float y ) {
    return x/y;
}