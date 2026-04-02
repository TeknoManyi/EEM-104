#include <stdio.h>
#include <conio.h>

int main() {
    char a, b, c;

    printf("1. Bir harf tusuna basiniz ve Enter'a basınız: ");
    a = getchar();                                                 //Enter beklenir ekranda görünür
    getchar();
    printf("-> %c tusuna bastiniz.\n\n", a);
    printf("2. Bir harf tusuna basiniz: ");
    b = getche();                                                  //Enter beklenmez ekranda görünür
    printf("\n-> %c tusuna bastiniz.\n\n", b);
    printf("3. Bir harf tusuna basiniz: ");
    c = getch();                                                   //Enter beklenmez ekranda görünmez ama program alır
    printf("\n-> %c tusuna bastiniz.\n", c);
    return 0;
}