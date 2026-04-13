#include <stdio.h>
int main() {
    //2*3, 3*2
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int b[3][2]={{1,2},{3,4},{5,6}};
    int c[3][2]={{0,0},{0,0},{0,0}};
    for(int i=0;i<3;i++) {
        for (int k=0;k<2;k++){
            for (int j=0;j<3;j++) {
                c[i][k]+=a[i][j]*b[j][k];
        }
            printf("C[%d][%d]\t %d ", i, k,c[i][k]);
        }

        printf("\n");
    }
}