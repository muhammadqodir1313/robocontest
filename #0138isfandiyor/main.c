#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    n=n*n*n*n*n+8*n*n*n*n-5*n*n*n+3*n*n+n-12;
    printf("%d", n);
    return 0;
}