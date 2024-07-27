#include <stdio.h>
float tempconv(float faren){
    float cels;
    cels = 5.0/9.0 * (faren - 32);
    return cels;
}
int main(){
    float cels, faren;
    scanf("%f", &faren);
    cels=tempconv(faren);
    printf("%f", cels);
    return 0;
}