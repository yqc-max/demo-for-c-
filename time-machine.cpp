#include <stdio.h>

int hour1, minute1,hour2, minute2;

int main() {

    scanf("%d %d", &hour1, &minute1);
    scanf("%d %d", &hour2, &minute2);

    int total1 = hour1 * 60 + minute1;
    int total2 = hour2 * 60 + minute2;
    int diff = total2 - total1;
    if (diff < 0) {
        diff += 24 * 60; // 如果第二个时间早于第一个时间，说明跨越了午夜
    }
    int diffHour = diff / 60;
    int diffMinute = diff % 60;
    printf("%d %d\n", diffHour, diffMinute);

    return 0;
}