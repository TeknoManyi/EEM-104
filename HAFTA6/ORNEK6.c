#include <stdio.h>
int main () {
    int adet=10; int j; int i=1;
        while (i<=adet) {
            j=i;
            while (j>=1) {
                printf("%d ", j);
                j--;
            }
            i++;
            printf("\n");
        }
}