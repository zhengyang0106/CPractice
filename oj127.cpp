/*************************************************************************
	> File Name: oj127.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年07月21日 星期日 13时42分57秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
    int a, b;
    cin >> a >> b;
    double sum = a;
    while (b--) {
        sum =  sum * (1 + 0.06);
    }
    printf("%d\n", (int)sum);

    return 0;
}
