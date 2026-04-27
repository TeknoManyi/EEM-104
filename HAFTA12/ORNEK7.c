#include <stdio.h>
#include <math.h>
int main() {
    printf("%lf\n", pow(4,2));              //üssü
    printf("%lf\n", sqrt(81));              //karekök alma
    printf("%lf\n", exp(1));                // e^1 vs hesaplama
    printf("%lf\n", log(3));                //ln hesabı yani ln3
    printf("%lf\n", log10(10));             //log10 tababında hesaplama
    printf("%d\n", abs(-7));                //mutlak değer alma
    printf("%lf\n", fabs(-7.2));            //ondalıklı mutlak değer alma
    printf("%lf\n", sin(3.14159265/6));     //sin hesaplar radyan cinsinden
    printf("%lf\n", cos(3.14159265/6));     //cos hesaplar radyan cinsinden
    printf("%lf\n", tan(3.14159265/6));     //tan hesaplar radyan cinsinden
    printf("%lf\n", asin(0.5));             //arcsin hesaplar radyan cinsinden
    printf("%lf\n", acos(0.5));             //arccos hesaplar radyan cinsiden
    printf("%lf\n", atan(0.5));             //arctan hesaplar radyan cinsinden
    printf("%lf\n", ceil(5.7));             //üste yuvarlar
    printf("%lf\n", floor(5.7));            //alta yuvarlar
    printf("%lf\n", fmod(5,3));             //float ile mod alır

}