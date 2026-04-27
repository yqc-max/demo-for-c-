#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{ 
    srand (time(0));
    int number = rand() % 100 + 1;
    int count = 0;
    int guess =0 ;
    printf ("我已经想好了一个1到100之间的数字，你能猜到它吗？\n");
        do {
            printf ("请输入你的猜测：\n");
            scanf("%d", &guess);
            count++;
            if (guess < number) {
                printf ("太小了！\n");
            }
            if (guess > number) {
                printf ("太大了！\n");
            }
        } while (guess != number);
        printf ("恭喜你猜对了！你总共猜了%d次。\n", count);
        return 0;
        }

