#include <stdio.h>

int main() {
    float quantity;
    float unitPrice;
    float amount;
    float discount;

    printf("enter quantity: ");
    scanf("%f", &quantity);
    printf("enter price: ");
    scanf("%f", &unitPrice);

    amount = quantity * unitPrice;

    if (quantity >= 1000) {
        discount = 0.10f * amount;
        amount = amount - discount;
    }

    printf("amount = %.2f", amount);
    return 0;
}
