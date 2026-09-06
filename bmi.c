#include <stdio.h>

int main()
{
    printf("--------------------BMI CALCULATOR-------------------- \n");
    printf("Let's check your BMI \n");
    printf("Enter your weight in kilograms \n");
    float w;
    scanf("%f",&w);

    printf("Enter your Height in metres \n");
    float h;
    scanf("%f",&h);

    float b;
    b = w/(h*h);

    printf("Your BMI is: %f \n",b);

    if(b>0 && b<=18.5)
    {
        printf("According to your BMI you are under weight \n");
        printf("You should focus on muscle building and what you eat \n");
        printf("Eat foods that are rich in good fats and protein \n");
    }

    else if(b>18.5 && b<=24.9)
    {
        printf("According to your BMI you have a healthy weight \n");
        printf("Your BMI is ideal so maintain your BMI \n");
        printf("Eat foods that are rich in protein and start to track your macors \n");
    }

    else if(b>25 && b<=29.9)
    {
        printf("According to your BMI you are over weight \n");
        printf("You should go on a walk and track what you eat \n");
        printf("Eat foods that are rich in protein and avoid any kind of junk foods\n");
    }

    else if(b>=30)
    {
        printf("According to your BMI you are obese \n");
        printf("You should start going to gym and focus on cardio more \n");
        printf("Eat foods that are rich in protein avoid any fats and junk foods and starting tomorrow track macros\n");
    }

    printf("Ideal BMI is from 18.5 to 24.9 \n");

    return 0;
}