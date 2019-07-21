/*************************************************************************
	> File Name: oj116.c
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年07月19日 星期五 20时23分47秒
 ************************************************************************/

#include<stdio.h>

#include<stdlib.h>
#include<math.h>

bool cmp (int *a, int *b) {
    return a<b;
}

int main () {
    int a, b,c;
    scanf("%d %d %d", &a, &b,&c);
    int s[3]= {a,b,c};
    qsort(s,3,sizeof(int),cmp);
    if ((a+b) < c) {printf ("illegal triangle\n");}
    else if(a * a + b*b  > c*c) {
        printf ("acute triangle\n");
    } else if (a*a + b*b == c*c) {
        printf("right triangle\n");
    } else if(a *a + b*b < c*c) {
        printf("obtuse triangle");
    }


    return 0;
}
