#include <stdio.h>
#include <stdlib.h>
int main () {
    char a=0, b;
    FILE *Dosya;
    Dosya=fopen("C:\\Users\\tekno\\deneme6.txt","r");
    while (fscanf(Dosya,"%c",&b)!=EOF)
        if (b=='7')
            a++;
    fclose(Dosya);
    printf("%d",a);
}