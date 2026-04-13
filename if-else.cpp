#include <stdio.h>


int main()
{
    int x,f;
    
    printf("输入一个整数：");
    scanf ("%d",&x);

    if (x<0){ //if后面的是要圆括号
        f = -1;
    } else if ( x ==0 ){
        f=0;
    }else {
        f=2 * x;
    }

    printf("%d\n",f);

    return 0;
}