#include <stdio.h>
 int main() {
    int cm=170;
    scanf("%d",&cm);
    int d=(cm/30.48);
    int foot=d;
    int inch=(d-foot)*12;
    printf("%d,%d\n", foot, inch);
    return 0;
}
