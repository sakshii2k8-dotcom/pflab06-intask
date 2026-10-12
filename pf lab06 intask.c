#include <stdio.h>

int main()
{
    int category;
    int price;
    int age;
    int number;

    printf("Enter number from 1 to 31: ");
    scanf("%d", &number);

    while (1)
    {
        printf("\nEnter age (0 to stop): ");
        scanf("%d", &age);

        if (age == 0)
        {
            break;
        }

        printf("Enter category: ");
        scanf("%d", &category);

        switch (category)
        {
            case 1:
                price = 500;
                break;

            case 2:
                price = 800;
                break;

            case 3:
                price = 1200;
                break;

            default:
                printf("Invalid category\n");
                continue;
        }

        if (age < 13)
        {
            price = price * 70 / 100;
            printf("30%% discount applied\n");
        }
        else if (age >= 60)
        {
            price = price * 80 / 100;
            printf("20%% discount applied\n");
        }
        else
        {
            printf("No discount\n");
        }

        printf("Price after age discount: Rs. %d\n", price);

        if (number % 5 == 0)
        {
            printf("It is Bonus Day\n");
            printf("Extra Rs. 50 discount applied\n");

            price = price - 50;
        }
        else
        {
            printf("No bonus\n");
        }

        if (price < 100)
        {
            price = 100;
        }

        printf("Final price: Rs. %d\n", price);
    }

    printf("\nKiosk closed.\n");

    return 0;
}

