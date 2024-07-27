#include <stdio.h>
#include <stdlib.h>
int main(){
    int ival, d_plc, sign; long lval; unsigned long ulval=3628800L;
    float real1, real2 = -57.12345;
    char str1[20]="-250", str2[20]="765.2345", str3[20], str4[33], *str5;
    ival = atoi(str1);
    lval = atol("12345678");
    real1 = atof(str2);
    printf("%d %ld %.4f\n", ival, lval, real1);
    itoa(67, str3, 8);
    // ultoa(ulval, str4, 2);
    printf("%s %s\n", str3, str4);
    str5 = fcvt(real2, 5, &d_plc, &sign);
    printf("%.5f conversion gives: String %s, Decimal is at place %d, Sign is %d", real2, str5, d_plc, sign);
    return 0;
}