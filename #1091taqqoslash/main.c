#include <stdio.h>

int main() {
    int a,b,c, sum=0;
    scanf("%d %d %d", &a, &b, &c);
    if(a!=b){
        sum++;
    }
    if(a!=c){
        sum++;
    }
    if(b!=c){
        sum++;
    }
    if(sum==0){
        sum=1;
    }
    printf("%d", sum);
    return 0;
}