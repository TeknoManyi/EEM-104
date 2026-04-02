#include <stdio.h>

int main(void) {
    int x,y;
    x=10; y=5;
    printf("x + y = %d + %d = %d\n",x,y,x+y);
    printf("x - y = %d - %d = %d\n",x,y,x-y);
    printf("x * y = %d * %d = %d\n",x,y,x*y);
    printf("x / y = %d / %d = %d\n",x,y,x/y);
    printf("x mod y = %d mod %d = %d",x,y,x%y);

    return 0;
}