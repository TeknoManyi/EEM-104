    #include <stdio.h>
    #define PI 3.14
    int main() {
        float r,alan,cevre;
        printf("Yaricapi giriniz: ");
        scanf("%f",&r);
        alan=PI*r*r; cevre=2*PI*r;
        printf("Dairenin alani \t\t:%8.3f\n", alan);
        printf("Dairenin cevresi \t\t:%8.3f", cevre);

    }