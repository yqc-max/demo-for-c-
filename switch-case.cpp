#include <stdio.h>
int main()
{
    int type;
    scanf("%d", &type); //输入一个case型号  一个数
    switch (type ){
        case 1:
        printf ("你好\n");
            break;
        case 2:
        printf("早上好\n");
            break;
        case 3 :
        printf("晚上好\n");
            break;
        case 4:
            printf("再见\n");
            break;
        case 5:
            printf("谢谢\n");
            break;
        default:
            printf("输入错误\n");
            break;  

    }
    return 0;
    
}   