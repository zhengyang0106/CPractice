/*************************************************************************
	> File Name: p1008.c
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年04月24日 星期三 20时46分10秒
 ************************************************************************/

#include<stdio.h>
int num[10] = {0};
int f(int i) {
    
    return i / 100 + i % 100 / 10 + i % 100 % 10;
    
}
int f1(int i) {
    return ( i / 100) *( i % 100 / 10) *( i % 100 % 10);
    
}
int main() {
    int i, j, k;
    for ( i = 123; i <= 333; i++) {
        j = 2 * i;
        k = 3 * i;
        if ( f(i) + f(j) + f(k) == 1+2+3+4+5+6+7+8+9 && f1(i) * f1(j) * f1(k) == 1*2*3*4*5*6*7*8*9 )
        printf ("%d %d %d\n", i, j, k);

        

    }
    return 0;
}