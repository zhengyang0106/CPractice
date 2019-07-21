/*************************************************************************
	> File Name: oj124.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年07月21日 星期日 09时52分52秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
    int a,b,c,d;
    cin >>a >>b >>c >>d;
    if ((a == 1 || a == 2) || (b>=1 && b <= 50)) {
        if ((c >= 10 && c <= 25) || d >= 5 ) {
            cout << "ok" <<endl;
        }else {
            cout << "pass" <<endl;
        }
    }else {
        cout << "pass" <<endl;
    }

    return 0;
}
