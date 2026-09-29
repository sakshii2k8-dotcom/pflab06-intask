#include <stdio.h>

int main()
{
    int containers;
    int weight;
    int cargoType;
    int trackingCode;

    printf("Enter number of containers: ");
    scanf("%d", &containers);

    for(int i = 1; i <= containers; i++)
    {
        printf("\nEnter weight: ");
        scanf("%d", &weight);

        printf("Enter cargo type (1-3): ");
        scanf("%d", &cargoType);

        switch(cargoType)
        {
            case 1:
                if(weight <= 20000)
                    printf("Container can be loaded\n");
                else
                    printf("Container cannot be loaded\n");
                break;

            case 2:
                if(weight <= 15000 && i % 2 != 0)
                    printf("Container can be loaded\n");
                else
                    printf("Container cannot be loaded\n");
                break;

            case 3:
                if(weight <= 18000)
                    printf("Container can be loaded\n");
                else
                    printf("Container cannot be loaded\n");
                break;

            default:
                printf("Invalid cargo type\n");
        }

        trackingCode = (weight % 97) % 100;
        printf("Tracking code: %02d\n", trackingCode);
    }

    return 0;
}
