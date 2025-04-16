#include <stdio.h>

int main(){
    double s,k,f;
    scanf("%lf", &s);
    k=s+273.15;
    f=s*1.80+32.00;
    printf("%.5lf \n %.5lf",k,f);
    return 0;
}