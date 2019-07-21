/*************************************************************************
	> File Name: oj114.c
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年07月19日 星期五 20时11分21秒
 ************************************************************************/

#include<stdio.h>
int main () {

    char x;
    scanf("%c", &x);

    switch (x) {
        case 'h' :{printf ("He\n");} break;
        case 'l' :{printf ("Li\n");} break;
        case 'c' :{printf ("Cao\n");} break;
        case 'd' :{printf ("Duan\n");} break;
        case 'w' :{printf ("Wang\n");} break;
        default :printf ("Not Here\n");
        
    }


    return 0;
}
