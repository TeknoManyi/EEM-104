#include<stdio.h>
#include<stdlib.h>
#include<time.h>
double maksimumbul(double);
double minimumbul(double);
double maks=0;
double min=32767;
main()
{
    int s;
    double rast[10][10];
    srand(time(NULL));
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            rast[i][j]=rand();
            s=s+1;
            printf("Kayit %d: %.0lf \n",s,rast[i][j]);
            maksimumbul(rast[i][j]);
            minimumbul(rast[i][j]);
        }
    }
    printf("Matris icerisindeki en buyuk deger %.0lf'dir.\n",maks);
    printf("Matris icerisindeki en kucuk deger %.0lf'dir.",min);
}
double maksimumbul(double x)
{
    if(x>maks)
        maks=x;
}
double minimumbul(double x)
{
    if(x<min)
        min=x;
}