#include <stdio.h>
main() {
    int t=1;
    printf("t=%d\n",t);
    int *pt=&t;
    *pt=*pt+2;
    printf("t=%d\n",*pt);

}