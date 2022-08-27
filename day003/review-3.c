#include <stdio.h>
#include <stdlib.h>

int main()
{
    float restBill, tip, total, valuePerPerson; 
    int numPeople;

    printf("\nWrite down the value of the restaurant bill, the tip and the number of people: ");
    scanf("%f%f%d", &restBill, &tip, &numPeople);
   
    total = (restBill * (tip/100)) + restBill;
    valuePerPerson = total / numPeople;

    printf("\nEach person will pay: $%.2f", valuePerPerson);

    return 0;
}