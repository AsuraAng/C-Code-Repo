// 1.Write a code for Calculator as a function driven program with Switch Case.....
#include <stdio.h>
#include <stdbool.h>

float add(float a, float b)
{
    return a + b;
}
float sub(float a, float b)
{
    return a - b;
}
float division(float, float);
float multiplication(float, float);

void Menu()
{
    for (int i = 0; i < 25; i++)
    {
        printf("-");
    }

    printf("Welcome to the Calculator");

    for (int i = 0; i < 25; i++)
    {
        printf("-");
    }

    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Division");
    printf("\n4.Multiplication");
}

int main(int argc, char const *argv[])
{

    int ch;
    float a, b;
    Menu();
    printf("\nEnter the Choice (1 to 4) : ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("Enter the Numbers to be added : ");
        scanf("%f %f", &a, &b);
        float sum = add(a, b);
        printf("The sum of the given Numbers is : %f", sum);
        break;
    case 2:
        printf("Enter the Numbers to be subtracted : ");
        scanf("%f %f", &a, &b);
        float subtract = sub(a, b);
        printf("The difference of the given Numbers is : %f", subtract);
        break;
    case 3:
        printf("Enter the Dividend : ");
        scanf("%f", &a);
        printf("Enter the Divisor : ");
        scanf("%f", &b);
        float quotient = division(a, b);
        printf("The Quotent is : %f", quotient);
        break;
    case 4:
        printf("Enter the Numbers to be Multiplied : ");
        scanf("%f %f", &a, &b);
        float product = multiplication(a, b);
        printf("The product of the given Numbers is : %f", product);
        break;
    default:
        printf("Invalid Choice!!!");
        break;
    }
    return 0;
}

float division(float a, float b)
{
    return a / b;
}
float multiplication(float a, float b)
{
    return a * b;
}