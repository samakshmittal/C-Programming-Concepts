#include <stdio.h>
int main(){
    printf("%d\n", printf("abc"));
    // int a, b, c;
    // c=scanf("%d%d", &a, &b);
    // printf("Number of fields read = %d\n", c);
    int a,b;
    printf("a=%d, b=%d, printf=%d\n", a, b, printf("scanf=%d ", 5*scanf("%d%d", &a, &b)));
    return 0;
}