#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int count =0;
    int num  ;
    int all = 0;
    printf ("即将进行平均数计算，输入-1为止 \n");
    printf ("请输入数字\n");

   // do {
   //      scanf("%d",&num);
   //     if ( num != -1 )
   //    {
    //    count++ ;            进行了两次数据判断，浪费资源
   //     all += num ;}
   // }while (num != -1);

   scanf ("%d",&num);
    while ( num != -1 ){
        all += num;
        count ++;
        scanf("%d",&num);
    }
    double result = 1.0*all/count ;
    printf("平均数是%.2f \n输入总数是%d\n" , result ,count);

    return 0;
    
}