#include <stdio.h>

int main(){
    long int n,k;
    scanf("%ld %ld", &n, &k);
    if(n==0)printf("%ld", 1);
    else printf("%ld", 1+k);
    return 0;
}