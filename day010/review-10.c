#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mass;
    int time;

    time = 0;
    printf("\nEnter the mass of a material in grams: ");
    scanf("%f", &mass);

    while (mass >= 0.05)
    {
        mass = mass / 2;
        time += 50;
    }

    printf("\nFinal mass: %f\n", mass);
    printf("\nThe elapsed time was %d seconds.\n\n", time);

    return 0;
}