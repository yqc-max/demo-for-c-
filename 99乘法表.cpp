#include <stdio.h>

int main() {
    int max_j = 9; // 假设我们要打印到 9
    
    // 外层循环控制 j
    for (int j = 1; j <= max_j; j++) {
        printf("row%d  ",j);
        // 内层循环控制 i
        for (int i = 1; i <= j; i++) {
            printf("%d*%d=%-2d  ", i, j, i * j); // %-2d 是为了对齐
        }
        printf("\n"); // 每一行结束后换行，这是关键！
    }
    
    return 0;
}

