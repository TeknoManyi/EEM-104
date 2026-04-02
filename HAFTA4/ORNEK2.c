#include <stdio.h>
int main() {
    float sicaklik;
    printf("Sicaklik Degerini Giriniz:");
    scanf("%f", &sicaklik);
    if (sicaklik>=40)
    {
        printf("Bugun hava asiri sicak");
    }
    else if (sicaklik>=30&&sicaklik<=40)
    {
        printf("Bugun hava sicak");
    }
    else if (sicaklik>=20&&sicaklik<=30)
    {
        printf("Bugun hava normal sicaklikta");
    }
    else if (sicaklik>=10&&sicaklik<=20)
    {
        printf("Bugun hava soguk");
    }
    else {
        printf("Bugun hava asiri soguk");
    }
    return 0;
}