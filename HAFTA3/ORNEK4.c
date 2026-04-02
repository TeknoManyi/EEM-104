#include<stdio.h>
main() {
    int x,y,z1,z2,z3;
    x=54; //x=110110
    y=15; //001111
    z1=x|y; //z=111111=63
    z2=x&y; //z=000110=6
    z3=x^y;~ //x=54(110110, y=15(001111),
    printf("z1=%d\n",z1);
    printf("z2=%d\n",z2);
    printf("z3=%d\n",z3);
}