#include<stdio.h>
double fibonacci(double);
int main() {
    printf("Fibonacci dizisi: ");
    for (int i=1; i<=20; i++)
        printf("%.0lf ",fibonacci(i));
}
double fibonacci(double n) {
    if (n<=2)
        return 1;
    else
        return (fibonacci(n-1)+fibonacci(n-2));
}   