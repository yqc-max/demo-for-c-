#include  <stdio.h>
int main(){
int a,b;
printf("请输入两个整数：\n Eg:1 2\n");
printf("raady to input:\n");
scanf("%d %d",&a,&b);
// 屎山代码
int max = 0;

if (a > b) {
    max = a;
    printf("较大的数是：%d\n", max);
} 
if (b > a) {
    max = b;
    printf("较大的数是：%d\n", max);
}
if (a == b) {
        printf("两个数相等：%d\n", a);
    }

    return 0;
}