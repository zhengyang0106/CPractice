/*************************************************************************
	> File Name: oj109.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年07月20日 星期六 20时42分59秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
    int n;
    cin >>n ;
    int a,b,c,d;
    a = n/1000;
    b = n/100 %10;
    c = n%100 /10;
    d = n % 10;
    if (a % 2 == 0 || b %2 ==0 || c %2 == 0 || d %2 == 0) cout<< "YES" << endl;
    else cout << "NO" <<endl;

    return 0;
}
