#include <stdio.h>

int main(){
    long long int n,m;
    scanf("%lld %lld", &n, &m);
    printf("%lld", (m-n+1)*10);
    return 0;
}