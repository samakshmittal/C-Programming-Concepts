#include <stdio.h>
int main(){
    char opr;
    int val1, val2, val3=0;
    printf("Enter two numbers ");
    scanf("%d%d", &val1, &val2);
    printf("Enter the operator out of +-/*");
    fflush(stdin);
    scanf("%c", &opr);
    switch(opr){
        case '+' : val3 = val1 + val2; break;
        case '-' : val3 = val1 - val2; break;
        case '*' : val3 = val1 * val2; break;
        case '/' : val3 = val1 / val2; break;
    }
    printf("The result is %d\n", val3);
    return 0;
}