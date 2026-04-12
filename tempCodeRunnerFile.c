#include <stdio.h>
int main()
{
    int score;
    printf("请输入成绩：");
    scanf("%d", &score);
    int apple;
    apple = score/10;

    if (apple > 9){
        printf("good job");
    }
 
    return 0;
}