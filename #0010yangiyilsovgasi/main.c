#include <stdio.h>

int main(){
    long long int a,b,c,n;
    scanf("%lld %lld %lld %lld", &n, &a, &b, &c);
    if(a+b+c>=n) printf("Yes");
    else printf("No");
    return 0;
}