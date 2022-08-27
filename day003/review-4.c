#include <stdio.h>
#include <stdlib.h>

int main()
{
    float daysOfWork, amountPerDay, totalPay, discount;

    amountPerDay = 45.00;

    printf("Write down how many days the employee has worked: ");
    scanf("%f", &daysOfWork);

    totalPay = amountPerDay * daysOfWork;
    discount = totalPay * 8/100;
    totalPay = totalPay - discount;

    printf("The employee must be paid: $%.2f\nDiscount: $%.2f\n", totalPay, discount);

    return 0;
}