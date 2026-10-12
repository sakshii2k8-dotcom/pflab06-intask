#include <stdio.h>

int main()
{
    int value, option;

    scanf("%d", &value);

    while (value != -1)
    {
        scanf("%d", &option);

        /* Option 1: Water Heater ON */
        if (option == 1)
        {
            value = value | 2;
        }

        /* Option 2: Air Conditioner OFF */
        else if (option == 2)
        {
            value = value & ~4;
        }

        /* Option 3: Toggle Lights */
        else if (option == 3)
        {
            value = value ^ 1;
        }

        /* Option 4: Check Camera */
        else if (option == 4)
        {
            if ((value & 8) != 0)
                printf("Security Camera: ON\n");
            else
                printf("Security Camera: OFF\n");
        }

        printf("New value: %d\n", value);

        /* Check AC and Water Heater */
        if ((value & 4) != 0 && (value & 2) != 0)
            printf("AC and Water Heater are both ON\n");
        else
            printf("AC and Water Heater are not both ON\n");

        /* Read next resident's value */
        scanf("%d", &value);
    }

    return 0;
}

