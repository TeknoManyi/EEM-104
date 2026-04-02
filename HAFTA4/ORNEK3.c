#include <stdio.h>
int main() {
    int x,y;
    printf("X'in degerini giriniz: ");
    scanf("%d",&x);
    printf("Y'in degerini giriniz: ");
    scanf("%d",&y);
    if (x>y) {
        printf("%d > %d", x,y);
    }
    else if (x<y){
        printf("%d > %d", y,x);
    }
    else {
        printf("%d = %d", x,y);
    }
}
