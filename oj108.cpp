/*************************************************************************
	> File Name: oj108.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年07月20日 星期六 20时33分48秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
 char a;
    cin >> a;
    double c ,d;
    cin >>c >>d;
    switch (a) {
        case 't' : {printf("%.2lf\n", c*d /2);}break;
        case 'r' : {printf("%.2lf\n", c*d);}break;
    }

    return 0;
}
