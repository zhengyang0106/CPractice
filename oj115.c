/*************************************************************************
	> File Name: oj115.c
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年07月19日 星期五 20时16分23秒
 ************************************************************************/

#include<stdio.h>
int main () {
    int a,b;
    scanf("%d %d", &a, &b);
    int c = a%10 *10 + a/10;

    if (a == b) {
        printf("100\n");
    } else if (c== b){
        printf("20\n");
    }
    else if (a%10 == b%10 || a%10 == b/10 || a /10 == b/10||a /10 == b%10) {
        printf("2\n");
    }
    else printf("0\n");
    return 0;
}
