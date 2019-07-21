/*************************************************************************
	> File Name: oj113.c
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年07月19日 星期五 20时01分04秒
 ************************************************************************/

#include<stdio.h>


int main() {
    int year, day;
    scanf("%d %d", &year, &day);
    if (day == 1 || day == 3|| day ==5|| day ==7 ||day ==8 ||day ==10||day ==12){
        printf("31\n");
    }else if (day == 4 ||day == 6||day ==9 ||day == 11) {
        printf("30\n");
    }
    if ( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ){
        if (day == 2) {
            printf ("29\n");
        }
    }
    else {
        if (day == 2) printf ("28\n");
    }

    return 0;
}
