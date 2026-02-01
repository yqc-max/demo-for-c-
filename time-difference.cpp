#include <stdio.h>
int main() {
    int hour1, minutes1;
    int hour2,minutes2;

    printf("Enter the first time formate (hour minutes): ");
    scanf("%d %d", &hour1, &minutes1);
    printf("Enter the second time formate (hour minutes): ");
    scanf("%d %d", &hour2, &minutes2);

    int totalMinutes1 = hour1 * 60 + minutes1;
    int totalMinutes2 = hour2 * 60 + minutes2;
    int diffMinutes = totalMinutes1 - totalMinutes2;

    int finalHours = diffMinutes / 60;
    int finalMinutes = diffMinutes % 60;


    printf("Time difference is %d hours %d minutes. \n", finalHours, finalMinutes);

    
    return 0;
}  