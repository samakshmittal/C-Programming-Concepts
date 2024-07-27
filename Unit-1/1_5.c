#include <stdio.h>
int sum;
int main(){
    int a;
    for(a = 1; a <= 10; a++)
        sum = sum + a;
    printf("Sum of 1 to 10 = %d", sum);
    return 0;
}