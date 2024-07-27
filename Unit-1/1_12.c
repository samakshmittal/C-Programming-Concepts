#include <stdio.h>
int main(){
    int opnd1, opnd2;
    char str[10] = "45+987", opr;
    sscanf(str, "%d%c%d", &opnd1, &opr, &opnd2);
    return 0;
}