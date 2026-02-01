#include <stdio.h>

int main()
{
    const int AMOUNT = 100;
    int price = 0;

    printf("Enter the price amount: ");
    scanf("%d", &price);
    
    int change = AMOUNT - price;
    printf("Change to be returned: %d\n", change);
    return 0;
}
 