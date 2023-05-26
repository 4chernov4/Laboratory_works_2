#include <stdio.h>
#define N 1000
#include<iostream>


using namespace std;
long c[N];
int main() {
    setlocale(LC_ALL, "RUS");
    cout << ("Введите n") << endl;
    long n, i, j;
    scanf_s("%ld", &n);
    for (i = 1; i <= n; i++) c[i] = 0;
    c[0] = 1;
    for (j = 1; j <= n; j++)
        for (i = j; i >= 1; i--)
            c[i] = c[i - 1] + c[i];
    for (i = 0; i <= n; i++)
        printf("%ld ", c[i]);
    return 0;
}