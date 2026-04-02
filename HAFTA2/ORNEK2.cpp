#include <stdio.h>
int main() {
    char a=10;
    int b=270;
    unsigned int c=50000;
    long int d=2000000000;
    float e=12.2;
    double f=233.111111111;
    printf("a'nin degeri %d'dir\n",a);
    printf("b'nin degeri %i'dir\n",b);
    printf("c'nin degeri %u'dir\n",c);
    printf("d'nin degeri %ld'dir\n",d);
    printf("e'nin degeri %.1f'dir\n",e);
    printf("f'nin degeri %lf'dir",f);
}