/*
水仙花数是一个n位正整数=3，他的每个位上的数字的n次幂之和等于本身
*/

#include <stdio.h>

int main ()
{
    int n;
    //scanf ("%d",&n);
    n=3;
    int first = 1;
    int i=1;

    while (i<n) {
        first *= 10;
        i++;
    }
    printf("first=%d\ni=%d\n",first,i);
    //遍历100-999
    i=first;
    while ( i<first*10){
        int t =i;
        int sum = 0;
        do {
            int d = t%10;
            t/=10;
            

        }while (t>0);
        i++;

    }

    return 0;

}