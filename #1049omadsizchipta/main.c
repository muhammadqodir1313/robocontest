#include <stdio.h>
#include <string.h>

int main(){
    char n[20];
    int a=0;
    fgets(n, sizeof(n), stdin);
    n[strcspn(n, "\n")] = '\0';
    int m=strlen(n);
    for(int i=0;i<m;i++){
        if(n[i]=='1' && n[i+1]=='3'){
            a=1;
            break;
        } else{
            a=0;
        }
    }
    if(a!=1){
       printf("omadli chipta");
    } else{
        printf("omadsiz chipta");
    }
    return 0;
}
