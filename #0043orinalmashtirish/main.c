#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    int temp=n;
    n=m;
    m=temp;
    printf("%d %d", n,m);
    return 0;
}