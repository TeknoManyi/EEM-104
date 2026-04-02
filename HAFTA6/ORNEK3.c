#include <stdio.h>
int main() {
    int x=0;
    do {
        x++;
        if (x>20 && x<80) {
            continue;
        }
        printf("%4d", x);
    }while(x<100);
}