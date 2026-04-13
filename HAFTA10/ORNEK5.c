/*
5*2*2 lik bir çok boyutlu matris tanımlanyınız
bu elemanların değeri indisleri toplamı o matrisin değeridir
 */
#include <stdio.h>
int main() {
 int veri[5][2][2];
 for(int i=0;i<5;i++) {
  for(int j=0;j<2;j++) {
   for(int k=0;k<2;k++) {
    veri[i][j][k]=i+j+k;
    printf("i=%d j=%d k=%d-->%d \n",i, j,k,veri[i][j][k]);
   }
  }
 }
}