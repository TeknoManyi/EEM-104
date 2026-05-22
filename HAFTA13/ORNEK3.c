#include<stdio.h>
#include<math.h>
#define PI 3.14159265
main()
{
    printf("Aci\t Sinus\t\t Kosinus\t Arktanjant\n--\t ----\t\t --------\t -----------\n");
    for(float i=0; i<=360; i=i+30)
    {
        printf("%.0f\t%f\t %f\t %f\t \n",i,sin(i*PI/180),cos(i*PI/180),atan(i));
    }
}