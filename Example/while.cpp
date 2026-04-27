#include <stdio.h>
#include <stdlib.h> //取绝对值函数头文件

int main()
{
    int x ;
    int n=0;
    int t=0;
    printf("输入数字: \n");

    scanf ("%d", &x);
    //n++;
    //x /= 10;
    while (x>0) {    //在这里
        n++;
        x /= 10;
        printf ("//<log file>come to loop and N is %d\n", n );
    }
    while (x<0){
        t=-1;
        n++;
        x /= 10;
        printf ("//<log file>come to loop and N is %d\n", n );
    }
    if (n==0){
        printf("数字位数是:1 \n");
    } else if (t<0){
        printf ("数字是负数哦\n");
        n = abs(n);    //取绝对值函数
        printf("数字位数是：%d\n", n);
    } else {
        n = abs(n);    
        printf("数字位数是：%d\n", n);
    }
    return 0;

}