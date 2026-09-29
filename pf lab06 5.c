#include <stdio.h>

int main()
{
    int accessNumber;
    int hour;
    int mode;
    int allowed;

    printf("Enter access number (9999 to stop): ");
    scanf("%d", &accessNumber);

    while(accessNumber != 9999)
    {
        printf("Enter current hour (0-23): ");
        scanf("%d", &hour);

        mode = (hour >= 22 || hour < 6) ? 1 : 0;

        if(mode == 1)
        {
            printf("LATE NIGHT MODE\n");

            if(accessNumber & 8)
                allowed = 1;
            else
                allowed = 0;
        }
        else
        {
            printf("STANDARD MODE\n");

            if(accessNumber & (1 | 2 | 4))
                allowed = 1;
            else
                allowed = 0;
        }

        if(allowed)
            printf("Entry Granted\n");
        else
            printf("Entry Denied\n");

        if(accessNumber & 4)
            printf("Personal Trainer Access: YES\n");
        else
            printf("Personal Trainer Access: NO\n");

        printf("\nEnter access number (9999 to stop): ");
        scanf("%d", &accessNumber);
    }

    return 0;
}
