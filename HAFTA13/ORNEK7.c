#include<stdio.h>
#include<ctype.h>
main()
{
    char c;
    printf("c Karakterini Giriniz: ");
    scanf("%c",&c);
    if(isalpha(c))
        printf("%c alfabetik bir karakterdir. \n",c);
    if(isdigit(c))
        printf("%c numerik bir karakterdir. \n",c);
    if(isalnum(c))
        printf("%c alfabetik veya numerik bir karakterdir. \n",c);
    if(islower(c))
        printf("%c kucuk harfli bir karakterdir. \n",c);
    if(isupper(c))
        printf("%c buyuk harfli bir karakterdir. \n",c);
    if(ispunct(c))
        printf("%c bir noktalama isareti karakteridir. \n",c);
    if(isspace(c))
        printf("%c bosluk,enter,tab,yeni satir,vb. bir karakterdir \n",c);
    if(isgraph(c))
        printf("%c bosluk disinda yazilabilen bir karakterdir. \n",c);
    if(isprint(c))
        printf("%c bosluk dahil yazilabilen bir karakterdir. \n",c);
    if(iscntrl(c))
        printf("%c backspace, delete , enter, tab, fonksiyon tuslari vb. bir karakterdir. \n",c);
}