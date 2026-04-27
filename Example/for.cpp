#include <stdio.h>
int main() {
    int n;
    printf("输入想要阶乘的数字：\n");
    scanf ("%d",&n);
    int fact =1;
        //如果有固定次数，用for
        //如果必须执行一次，用do_while
        //其他情况用while
    for (int i=1; i <=n; i++){
        //   初始状态；条件判断；每轮的动作
        //  for (;条件;) == while（条件）{}

        fact *= i;
    }
    if(fact != 0){
        printf ("%d!=%d\n",n, fact);
    }
    if(fact== 0){
        printf ("数字过大，无法计算\n");
    }
    return 0;
}