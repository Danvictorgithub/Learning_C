#include <stdio.h>

int main(void) {
    int amount, twentyBills,tenBills,fiveBills,oneBills;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    twentyBills = amount / 20;
    amount = amount - (20 * twentyBills);

    tenBills = amount / 10;
    amount = amount - (10 * tenBills);

    fiveBills = amount / 5;
    amount = amount - (5 * fiveBills);

    oneBills = amount / 1;

    printf("$20 bills: %d\n",twentyBills);
    printf("$10 bills: %d\n",tenBills);
    printf("$5 bills: %d\n",fiveBills);
    printf("$1 bills: %d\n",oneBills);
    return 0;
}