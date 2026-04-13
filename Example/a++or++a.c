#include <stdio.h>


int main()
{
    int a =100;
    int b =a++;
 
    printf("如果 a = 100, 定义 b= a++ 那么 b = %d\n此时a的值为: %d \n", b, a);

    a = 100;
    b = ++a;

    printf("如果 a = 100, 那么++a = %d , 并且此时的 a的值是 %d  \n", b, a);

   // 结果表明，a++ 是先使用 a 的值，再进行自增，而 ++a 是先进行自增，再使用 a 的值。
   // 本质上只要写了++a或者a++，a的值都会增加1，区别在于使用a的值的时机不同。
    return 0;
}