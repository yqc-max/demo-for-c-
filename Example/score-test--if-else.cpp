#include <stdio.h>
int main()
{
    int score = 0;
    printf("请输入成绩：");
    scanf("%d", &score);
    int apple;
    apple = score/10;

    printf("你的等第类型是：%d\n",apple);
    printf("你的评语是：");
    if (apple >= 9) {
        printf("good job\n");
    }else if (apple >= 8) {
        printf("not bad\n");
    }else if (apple >= 7) {
        printf ("that's ok\n");
    }else if (apple >= 6) {
        printf("you can do better\n");
    }else if (apple <6){
        printf("should be improved\n");  }

    return 0;
}