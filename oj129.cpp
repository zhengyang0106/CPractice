/*************************************************************************
	> File Name: oj129.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年07月21日 星期日 14时08分00秒
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
    int a[n];
    int ans = 10000;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (ans <= a[i]) continue;
        ans = a[i];
    }

    cout << ans<<endl;
    return 0;
}
