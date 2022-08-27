#include <stdlib.h>
#include <stdio.h>

int main()
{
    float weight, height, imc;

    printf("Enter your weight (kg) and your height (m): ");
    scanf("%f%f", &weight, &height);

    imc = weight / (height * height);

    if (imc < 18.5)
        printf("IMC: %.1f\tSituation of underweight\n", imc);
    else if (imc >= 18.5 && imc < 25)
        printf("IMC: %.1f\tOptimal weight situation\n", imc);
    else if (imc >= 25 && imc < 30)
        printf("IMC: %.1f\tOverweight situation\n", imc);
    else if (imc >= 30 && imc < 40)
        printf("IMC: %.1f\tObesity situation\n", imc);
    else
        printf("IMC: %.1f\tSituation of severe obesity\n", imc);
    
    return 0;
}