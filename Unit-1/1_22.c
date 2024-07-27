#include <stdio.h>
int main(){
    char *str="Complete Line";
    int a=5, b=23;
    printf("%.*d, %.*s", a, b, a, str);
    return 0;
}