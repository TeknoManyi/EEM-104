#include <stdio.h>
int main() {
    for (int i=100; i<=999; i++) {
        int a, b, c;
        a= i/100;
        b= (i-a*100)/10;
        c= (i-a*100-b*10);
        if (a*a*a+b*b*b+c*c*c==i) {
            printf("%d\n", i);
        }
    }
}

//3 basamaklı sayılar içerisinde
//basamaklarındaki rakamların küplerinin
//toplamının kendisine eşit olan sayılar örn 153