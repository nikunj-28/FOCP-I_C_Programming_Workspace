#include<stdio.h>
int main(){
    int itemNumber,quantity;
    float unitPrice;

    printf("enter item number: ");
    scanf("%d", &itemNumber);

    printf("enter quantity: ");
    scanf("%d", &quantity);

    printf("enter unit price: ");
    scanf("%f", &unitPrice);

    float amount;
    amount =(quantity*unitPrice);

    printf("amount = %.2f\n",amount);

    float finalAmount;
    finalAmount = amount - .2*amount;
    printf("final amount = %.2f\n", finalAmount);

    return 0;

}
