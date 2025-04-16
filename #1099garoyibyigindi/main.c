#include <stdio.h>

int main(){
    int a,b;
    long long int sum=0;
    scanf("%d %d",&a, &b);
    for(int i=a;i<=b;i++){
        if(i%3==0 && i%7!=0){
            sum+=i;
        }
    }
    printf("%lld", sum);
    return 0;
}