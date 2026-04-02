#include<stdio.h>
main() {
    int x,y,z;
    x=1; y=2; z=2;
    printf("x=%d, y=%d, z=%d\n",x,y,z);
    printf("x>y mi %d\n", (x>y));
    printf("y>x mi %d\n", (y>x));
    printf("x==z mi %d\n", (x==z));
    printf("z!y mi %d\n", (z=!y));
    printf("z<=y mi %d\n", (z<=y));
    printf("z>=x mi %d\n", (z>=x));
}