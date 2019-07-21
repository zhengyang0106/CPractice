/*************************************************************************
	> File Name: oj117.c
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年07月19日 星期五 20时29分05秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int a,c;
    scanf("%d",&a);
    int b =a;
    int sum = 0;
    while (a) {
        c = a % 10;
        sum *=10;
        sum +=c;
        a /= 10;
    }
    if (sum == b) printf ("YES\n");
    else printf("NO\n");


    return 0;
}
