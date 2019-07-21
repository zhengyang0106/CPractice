/*************************************************************************
	> File Name: oj119.c
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年07月19日 星期五 20时52分44秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int year, mon,day;
    int flag = 0;
    if ((year %4 == 0&& year /100 != 0) || year %400 = 0);

    scanf("%d %d %d",&year, &mon,&day );
    if (mon == 1 || mon == 3|| mon == 7 ||mon ==8 || mon == 10||mon ==12 ) {
        if (day == 31 && mon != 12) mon += 1, day =1;
        else if(day == 31 && mon == 12) year+=1, mon = 1,day =1;
        else if(day == 28 )
    }
}
