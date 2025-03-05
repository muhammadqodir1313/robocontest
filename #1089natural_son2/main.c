#include <stdio.h>

int main(){
    int b,i,u,n;
    scanf("%d", &n);
    if(n==1000){
        printf("bir ming");
    }else{
        b=n/100;
        i=n%100/10;
        u=n%10;
        switch(b){
            case 1:printf("bir yuz ");break;
            case 2:printf("ikki yuz ");break;
            case 3:printf("uch yuz ");break;
            case 4:printf("to'rt yuz ");break;
            case 5:printf("besh yuz ");break;
            case 6:printf("olti yuz ");break;
            case 7:printf("yetti yuz ");break;
            case 8:printf("sakkiz yuz ");break;
            case 9:printf("to'qqiz yuz ");break;
        }
        switch(i){
            case 1:printf("o'n ");break;
            case 2:printf("yigirma ");break;
            case 3:printf("o'ttiz ");break;
            case 4:printf("qirq ");break;
            case 5:printf("ellik ");break;
            case 6:printf("oltmish ");break;
            case 7:printf("yetmish ");break;
            case 8:printf("sakson ");break;
            case 9:printf("to'qson ");break;
        }
        switch(u){
            case 1:printf("bir");break;
            case 2:printf("ikki");break;
            case 3:printf("uch");break;
            case 4:printf("to'rt");break;
            case 5:printf("besh");break;
            case 6:printf("olti");break;
            case 7:printf("yetti");break;
            case 8:printf("sakkiz");break;
            case 9:printf("to'qqiz");break;
        }
    }
    
    return 0;
}