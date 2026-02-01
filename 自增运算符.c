 #include <stdio.h>

int main() {
    int a = 14;  //赋值
    int t1 = a++;  //后置++，先赋值后自增，  a=15， t1=14
    int t2 = ++a;   //前置++，先自增后赋值  a=16， t2=16
    
    printf("%d %d\n", t1, t2);
    return 0;
}