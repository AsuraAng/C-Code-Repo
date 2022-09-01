#include <stdio.h>

void startMenu()
{
    printf("\n");
    for (int i = 0; i < 25; i++)
    {
        printf("-");
    }

    printf("\nWelcome to Zaayka !!!! \nWhat would you like to eat ?");

    for (int i = 0; i < 25; i++)
    {
        printf("-");
    }
    printf("\n");

    printf("1.Italian\n2.Indian\n3.Sea Food\n");
}


int main()
{
    int aim = 0;
    while (aim == 0)
    {
        startMenu();
        int ch;
        printf("Enter your Choice (1-3) :  ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            for (int i = 0; i < 25; i++)
            {
                printf("-");
            }
            printf("\nThe Italian Menu is : ");

            printf("\n1.Paasta\n2.Sweet Corn Soup\n3.Italian Pizza\n4.Naachos\n");
            int food1;
            printf("Enter your Choice (1-5) : ");
            scanf("%d", &food1);
            printf("Your Food will be delievered....");
            break;

        case 2:
            for (int i = 0; i < 25; i++)
            {
                printf("-");
            }
            printf("\nThe Indian Menu is : ");

            printf("\n1.Choole Bhatore\n2.Daal Chawal\n");
            int food2;
            printf("Enter your Choice (1-2) : ");
            scanf("%d", &food2);
            printf("Your Food will be delievered....");
            break;
        case 3:
            for (int i = 0; i < 25; i++)
            {
                printf("-");
            }
            printf("\nThe Sea Food Menu is : ");

            printf("\n1.Sea Urchins\n2.Smooked Octupus\n");
            int food3;
            printf("Enter your Choice (1-2) : ");
            scanf("%d", &food3);
            printf("Your Food will be delievered....");
            break;
        default:
            aim = 1;
            printf("You have entered wrong choice");
        }
    }

    return 0;
}
