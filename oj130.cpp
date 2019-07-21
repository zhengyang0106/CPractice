/*************************************************************************
	> File Name: oj100.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年07月20日 星期六 20时14分58秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
    double n,m;
    cin >> n >> m;
    
    double sum = 0;
    while (m--) {
        int i = 1;
        sum = (n*i+sum)*(1+0.00417);
        i++;
    }
    printf("$%.2lf\n", sum);

    return 0;
}
