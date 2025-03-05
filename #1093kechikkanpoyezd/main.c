#include <stdio.h>

int main(){
    int t,T,a;
    scanf("%d %d", &t, &T);
    a=(t+T)%24;
    switch(a){
        case 0:printf("%d", 0);break;
        case 1:printf("%d", 1);break;
        case 2:printf("%d", 2);break;
        case 3:printf("%d", 3);break;
        case 4:printf("%d", 4);break;
        case 5:printf("%d", 5);break;
        case 6:printf("%d", 6);break;
        case 7:printf("%d", 7);break;
        case 8:printf("%d", 8);break;
        case 9:printf("%d", 9);break;
        case 10:printf("%d", 10);break;
        case 11:printf("%d", 11);break;
        case 12:printf("%d", 12);break;
        case 13:printf("%d", 13);break;
        case 14:printf("%d", 14);break;
        case 15:printf("%d", 15);break;
        case 16:printf("%d", 16);break;
        case 17:printf("%d", 17);break;
        case 18:printf("%d", 18);break;
        case 19:printf("%d", 19);break;
        case 20:printf("%d", 20);break;
        case 21:printf("%d", 21);break;
        case 22:printf("%d", 22);break;
        case 23:printf("%d", 23);break;
    }
    return 0;
}