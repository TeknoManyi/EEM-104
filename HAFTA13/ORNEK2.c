#include<stdio.h>
#include<math.h>
main()
{
    printf("Aci\t Sinus\t\t Kosinus\t Arktanjant\n--\t ----\t\t --------\t -----------\n");
    for(double i=0; i<=360; i=i+30)
    {
        printf("%.0f\t%f\t%f\t%f\t \n",i,sin(i/6),cos(i/6),atan(i));
    }
}