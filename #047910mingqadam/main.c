#include <stdio.h>

int main(){
    int n;
    double a;
    scanf("%d", &n);
    a=n/100.;
    if(n%100==0){
        printf("%.0lf", a);
    }else if(n%10==0){
        printf("%.1lf",a);
    }else{
        printf("%.2lf",a);
    }
    return 0;
}