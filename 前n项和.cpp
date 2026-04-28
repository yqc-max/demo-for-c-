#include <stdio.h>
int main() {

    int n;
    double num = 1.0;
    scanf ("%d",&n);
    for(int i=2;i<=n;i++){
        if(i%2 ==0){
            num -= 1.0/i;
        }
        if(i%2 != 0){
            num += 1.0/i;
        }
        
    }
    printf("the result is %.2f\n", num);
    return 0;

} 