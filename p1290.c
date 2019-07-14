/*************************************************************************
	> File Name: p1290.c
	> Author:zhengyang 
	> Mail:1021606521@qq.com 
	> Created Time: 2019年04月24日 星期三 18时59分49秒
 ************************************************************************/

int swap (int  *a, int *b) {
    int temp ;
    temp = *a;
    *a = *b;
    *b=temp;
}
int ojld (int m, int n ,int p) {
    if (m == n) return p;
    if (m / n >= 2) return p;
    else return ojld (n, m - n,p ^ 1 );//  p ^ 1   是一个很好的变换选手的方式
}


int main() {
    int m,n,a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++) {
        scanf("%d %d",&m,&n);
        if (m < n) swap(&m, &n);
        if (ojld(m, n ,0) == 0) printf("Stan wins\n");
        else printf("Ollie wins\n");
    }
    return 0;
}
