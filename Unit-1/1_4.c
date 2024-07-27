#include <stdio.h>
int main(){
    long a, b;
    printf("Enter two elements to be added");
    scanf("%d%d", &a, &b);
    printf("%d + %d = %d\n", a, b, a+b);
    return 0;
}