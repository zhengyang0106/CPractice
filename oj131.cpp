/*************************************************************************
	> File Name: oj131.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年07月21日 星期日 18时34分52秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
int n;
    cin >>n;
    int a[n];
    int big = 0;
    int letter = 10000;
    for (int i = 0; i < n ; i++) {
        cin >> a[i];
        if (a[i] > big) big = a[i];
        if (a[i] < letter) letter = a[i];
    }
    cout << big - letter <<endl;

    return 0;
}
