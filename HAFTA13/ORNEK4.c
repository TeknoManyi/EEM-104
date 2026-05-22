#include<stdio.h>
#include<math.h>
main()
{
    int A,B;
    printf("Bir A ve B degeri Giriniz: ");
    scanf("%d %d",&A,&B);
    printf("%lf",(pow(A+B,3)-(A*B))/(pow(A,4)-B));
}