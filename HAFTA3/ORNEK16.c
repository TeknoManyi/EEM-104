#include <stdio.h>
#define PI 3.14
int main() {
    float r;
    printf("Yaricapi giriniz: ");
    scanf("%f", &r);
    printf("Dairenin alani \t\t:%8.3f\n", PI * r * r);
    printf("Dairenin cevresi \t:%8.3f", PI * r * 2);
}