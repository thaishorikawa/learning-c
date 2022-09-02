#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, higherIndex, lowerIndex;
    float temp[12], lowestTemp = 99, highestTemp = 0;

    for (i = 0; i < 12; i++)
    {
        printf("Enter the temperature of the month %d: ", i + 1);
        scanf("%f", &temp[i]);
    }

    for (i = 0; i < 12; i++)
    {
        if (lowestTemp > temp[i])
        {
            lowestTemp = temp[i];
            lowerIndex = i;
        }
        if (highestTemp < temp[i])
        {
            highestTemp = temp[i];
            higherIndex = i;
        }
    }

    printf("\nThe lowest temperature was %.2f and was in ", lowestTemp);
    switch (lowerIndex)
    {
    case 0:
        printf("January\n");
        break;
    case 1:
        printf("February\n");
        break;
    case 2:
        printf("March\n");
        break;
    case 3:
        printf("April\n");
        break;
    case 4:
        printf("May\n");
        break;
    case 5:
        printf("June\n");
        break;
    case 6:
        printf("July\n");
        break;
    case 7:
        printf("August\n");
        break;
    case 8:
        printf("September\n");
        break;
    case 9:
        printf("October\n");
        break;
    case 10:
        printf("November\n");
        break;
    case 11:
        printf("December\n");
        break;
    }

    printf("\nThe highest temperature was %.2f and was in ", highestTemp);
    switch (higherIndex)
    {
    case 0:
        printf("January\n");
        break;
    case 1:
        printf("February\n");
        break;
    case 2:
        printf("March\n");
        break;
    case 3:
        printf("April\n");
        break;
    case 4:
        printf("May\n");
        break;
    case 5:
        printf("June\n");
        break;
    case 6:
        printf("July\n");
        break;
    case 7:
        printf("August\n");
        break;
    case 8:
        printf("September\n");
        break;
    case 9:
        printf("October\n");
        break;
    case 10:
        printf("November\n");
        break;
    case 11:
        printf("December\n");
        break;
    }
    printf("\n");
    return 0;
}