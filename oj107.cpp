/*************************************************************************
	> File Name: oj107.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年07月20日 星期六 20时28分33秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
    int a;
    cin >> a;
    if (a %7 != 0) cout << "NO" <<endl;
    else if (a %2 !=0) cout << "YES"<<endl;
    else cout << "NO" << endl;
    return 0;
}
