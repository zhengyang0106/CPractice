/*************************************************************************
	> File Name: oj121.cpp
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年07月21日 星期日 09时38分53秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
    char a,b;
    cin >> a>>b;
    if (a == 'O' && b == 'O') cout << "TIE" <<endl;
    if (a == 'O' && b == 'Y') cout << "MING" <<endl;
    if (a == 'O' && b == 'H') cout << "LI" <<endl;
    if (a == 'Y' && b == 'Y') cout << "TIE" <<endl;
    if (a == 'Y' && b == 'O') cout << "LI" <<endl;
    if (a == 'Y' && b == 'H') cout << "MING" <<endl;
    if (a == 'H' && b == 'Y') cout << "LI" <<endl;
    if (a == 'H' && b == 'H') cout << "TIE" <<endl;
    if (a == 'H' && b == 'O') cout << "MING" <<endl;
    

    return 0;
}
