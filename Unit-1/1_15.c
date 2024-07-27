#include <stdio.h>
int main(){
    const int a=5;
    float b;
    b=(float)++a;
    printf("%d %f", a, ++b);
}