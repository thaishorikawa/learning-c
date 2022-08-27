#include <stdio.h>
#include <stdlib.h>

int main()
{
    char gender;
    int age;
    float weight, height;

    printf("Type gender (f, F, m or M), age, weight and height:\n");
    scanf("%c%d%f%f", &gender, &age, &weight, &height);

    printf("Gender: %c\nAge: %d\nWeight: %.1f\nHeight: %.2f\n", gender, age, weight, height);

    return 0;
}
