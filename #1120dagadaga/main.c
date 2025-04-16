#include <stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);
    if(n%2==0){
        for(int i=1;i<n;i++){
            n-=1;
        }
        printf("%lld", n);
    }
    return 0;
}