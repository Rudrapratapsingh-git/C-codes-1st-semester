#include <stdio.h>

int main()
{
    printf("--------------------BMI CALCULATOR-------------------- \n");
    printf("Enter your weight in kilograms \n");
    float w;
    scanf("%f",&w);

    printf("Enter your Height in metres \n");
    float h;
    scanf("%f",&h);

    float b;
    b = w/(h*h);

    printf("Your BMI is: %f",b);

    return 0;
}