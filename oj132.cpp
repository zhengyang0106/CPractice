/*************************************************************************
	> File Name: oj132.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年07月21日 星期日 18时51分26秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
    int n;
    cin >> n;
    int a;
    long long  sum = 1;
    while (n--) {
        cin >> a;
        sum *= a;

    }
    cout << sum <<endl;

    return 0;
}
