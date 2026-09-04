#include<stdio.h>
int main() {
    printf("Enter 1 for + \n");
    printf("Enter 2 for - \n");
    printf("Enter 3 for * \n");
    printf("Enter 4 for / \n");
    printf("Enter 5 for average of 3 numbers \n");
    printf("Enter 6 for area of circle \n");
    printf("Enter 7 for area of square \n");
    printf("Enter 8 for area of triangle \n");
    printf("Enter 9 for grading system \n");
    printf("Enter 10 to check whether it is a number or not \n");
    printf("Enter 11 for temperature converter \n");
    printf("Enter 12 for tables \n");
    printf("Enter 13 to check whether number is prime or not \n");
    printf("Enter 14 for factorial");

    int x;
    scanf("%d",&x);


    if(x==1)
    {
        printf("enter two numbers for operation: ");
        float a;
        float b;
        scanf("%f",&a);
        scanf("%f",&b);
        printf("%f",a+b);

    }
    else if(x==2)
    {
        printf("enter two numbers for operation: ");
        float a;
        float b;
        scanf("%f",&a);
        scanf("%f",&b);
        printf("%f",a-b);

    }
    else if(x==3)
    {
        printf("enter two numbers for operation: ");
        float a;
        float b;
        scanf("%f",&a);
        scanf("%f",&b);
        printf("%f",a*b);

    }
    else if(x==4)
    {
        printf("enter two numbers for operation: ");
        float a;
        float b;
        scanf("%f",&a);
        scanf("%f",&b);
        printf("%f",a/b);

    }
    else if(x==5)
    {
       printf("Enter 1st digit: ");
        float a;
        scanf("%f",&a);

        printf("Enter 2nd digit: ");
        float b;
        scanf("%f",&b);

        printf("Enter 3rd digit: ");
        float c;
        scanf("%f",&c);

        printf("average of there 3 digits is: %f",(a+b+c)/3); 
    }
    else if(x==6)
    {
       float radius;
        printf("Enter the Radius of circle");
        scanf("%f",&radius);
        printf("Area of circle is = %f",3.14*radius*radius);
    }
    else if(x==7)
    {
        float side;
        printf("Enter side of a Square");
        scanf("%f",&side);
        printf("Area of Square is = %f",side*side);
    }
    else if(x==8)
    {
        int Base;
        printf("Enter Base of Triangle: ");
        scanf("%d",&Base);

        int Height;
        printf("Enter Height of Triangle: ");
        scanf("%d",&Height);

        int Triangle_area = 0.5*Base*Height;

        printf("Area of Triangle is = %d",Triangle_area);  
    }
    else if(x==9)
    {
        printf("Enter your overall percentage: ");
        int a;
        scanf("%d",&a);

        if(95<a){
            printf("You have obtained A+ grade");
        }

        else if(a >= 90 && a <= 95){
            printf("You have obtained A grade");  
        }

        else if(a >= 80 && a <=90){
            printf("You have obtained B+ grade");  
        }

        else if(a >=65 && a <= 80){
            printf("You have obtained B grade");  
        }

        else if(a >=50 && a <= 65){
            printf("You have obtained C grade");  
        }

        else if(a >= 35 && a <= 50){
            printf("You have obtained D grade");  
        }

        else{
            printf("You have obtained F grade or you have entered invalid percentage");  
        }  
    }
    else if(x==11)
    {
        printf("1 for Farenhite to Celcius \n");
        printf("2 for Celcius to Farenhite  \n");

        int t;
        scanf("%d",&t);

        if(t==1)
        {
            printf("enter temperature in Farenhite: ");
            float f;
            scanf("%f",&f);
            printf("%f", (f-32)*5/9 );

        }

        else if(t==2)
        {
            printf("enter temperature in Celcius: ");
            float c;
            scanf("%f",&c);
            printf("%f", (c*9/5)+32 );
        
        }

        else
        {
            printf("you have not entered correct options");
    
        }
    }
    else if(x==12)
    {
        printf("Enter a number for it's table: ");
        int n;
        scanf("%d",&n);

        for(int i = 1; i <= 10; i++)
        {
            printf("%d \n",i * n);
        }
   
    }
    else if(x==13)
    {
        printf("enter a number: ");
        int n;
        scanf("%d",&n);

        int count=0;

        for(int i = 1; i <= n; i++)
        {
            if(n % i == 0)
            {
                count++;
            }
        }
        if(count == 2)
        {

            printf("number is prime");
        }

        else
        {
            printf("not prime");
        }
    }
    else if(x==14)
    {
        printf("enter a number: ");
        int n;
        int f = 1;
        scanf("%d",&n);

        for(int i = n ; i>=1 ; i--)
        {
            f=f*i;
        }
        printf("%d",f);
    }


    return 0;
}
