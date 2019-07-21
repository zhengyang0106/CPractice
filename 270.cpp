/*************************************************************************
	> File Name: 270.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年07月21日 星期日 11时06分05秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX 300000
long long  sum[MAX + 5];
int q[MAX + 5], head, tail;



int main() {
    long long n, m, ans;

   cin >> n >> m; 
    for (int i = 1; i <= n; i++ ) cin >> sum[i], sum[i] += sum[i - 1];
    head = tail = 0;
    q[tail++] = 0; // 单调队列里面存放的是数组下表 不是数组值
    ans = sum[1];
    for (int i = 1; i <= n; i++) {
        ans = max(ans, sum[i] - sum[q[head]]);
        while (tail - head && sum[q[tail - 1]] >= sum[i]) tail--;
        q[tail++] = i;
        if (q[head] == i -m) head++;

    }
    cout <<ans <<endl;
    return 0;

    return 0;
}
