#include <stdio.h>

int main(){
    long int a,b,s,p;
    scanf("%ld %ld", &a, &b);
    s=a*b;
    p=2*(a+b);
    if(s>p){
        printf("%d", s);
    } else{
        printf("%d", p);
    }
    return 0;
}