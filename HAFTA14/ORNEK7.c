#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *Dosya;
    Dosya=fopen("C:\\Users\\tekno\\deneme8.txt","w");
    for (int i=1; i<=10; i++) {
        for (int j=1; j<=10; j++) {
            fprintf(Dosya,"%dx%d=%d\t",j,i,i*j);
        }
        fprintf(Dosya,"\n");
    }
    //system("C:\\Users\\tekno\\deneme8.txt");
}