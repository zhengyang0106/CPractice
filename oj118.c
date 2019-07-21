/*************************************************************************
	> File Name: oj118.c
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年07月19日 星期五 20时34分48秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int a;
    scanf ("%d",&a);
    if (a == 1900) {printf("rat\n");}
    else {
        if (a > 1900) {
            int c = a-1900;
            c = c % 12;
            switch(c){
                case 0 :{printf("rat\n");};break;
                case 1 :{printf("ox\n");};break;
                case 2 :{printf("tiger\n");};break;
                case 3 :{printf("rabbit\n");};break;
                case 4 :{printf("dragon\n");};break;
                case 5 :{printf("snake\n");};break;
                case 6 :{printf("horse\n");};break;
                case 7 :{printf("sheep\n");};break;
                case 8 :{printf("monkey\n");};break;
                case 9 :{printf("rooster\n");};break;
                case 10 :{printf("dog\n");};break;
                case 11 :{printf("pig\n");};break; 
            }
        }else {
            int b = 1900-a;
                b= b%12;
            switch(b){
                case 0 :{printf("rat\n");};break;
                case 11 :{printf("ox\n");};break;
                case 10 :{printf("tiger\n");};break;
                case 9 :{printf("rabbit\n");};break;
                case 8 :{printf("dragon\n");};break;
                case 7 :{printf("snake\n");};break;
                case 6 :{printf("horse\n");};break;
                case 5 :{printf("sheep\n");};break;
                case 4 :{printf("monkey\n");};break;
                case 3 :{printf("rooster\n");};break;
                case 2 :{printf("dog\n");};break;
                case 1 :{printf("pig\n");};break; 
            }


        }
    }
    
    return 0;
}
