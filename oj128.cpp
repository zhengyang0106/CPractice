/*************************************************************************
	> File Name: oj128.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年07月21日 星期日 13时59分30秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
 int n;
    double sum = 0.0;
    cin >> n;
    int a[n] = {0};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    double avg = sum /n;
    printf("%.2lf\n", avg);
    

    return 0;
}
