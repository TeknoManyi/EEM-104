#include<stdio.h>
int main() {
    int x,y,z;
    x=1; y=2;
    printf("x'in ilk degeri %d'dir.\n",x);
    printf("y'nin ilk degeri %d'dir.\n",y);
    z=(++x)+(y++);
    printf("z=%d\n",z);
    printf("x'in ikinci degeri %d'dir.\n",x);
    printf("y'nin ikinci degeri %d'dir.",y);
}