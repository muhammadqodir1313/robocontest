#include <stdio.h>

int main(){
    long long int n,d;
    scanf("%lld", &n);
    if(n>3){
        d=n*(n-3)/2;
        printf("%lld", d);
    } else{
        printf("0");
    }
    return 0;
}