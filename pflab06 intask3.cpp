#include <stdio.h>

int main()
{
    int n;
    int marks1, marks2, marks3;
    int totalmarks, average;
    int i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\nStudent %d\n", i);

        printf("Enter marks1: ");
        scanf("%d", &marks1);

        printf("Enter marks2: ");
        scanf("%d", &marks2);

        printf("Enter marks3: ");
        scanf("%d", &marks3);

        totalmarks = marks1 + marks2 + marks3;
        average = totalmarks / 3;

        printf("Average = %d\n", average);

        switch (average / 10)
        {
            case 9:
                printf("A grade\n");
                break;

            case 8:
                printf("B grade\n");
                break;

            case 7:
                printf("C grade\n");
                break;

            case 6:
                printf("D grade\n");
                break;

            default:
                printf("F grade\n");
        }

        printf("Result: %s\n",
               (average >= 60 &&
                marks1 >= 40 &&
                marks2 >= 40 &&
                marks3 >= 40)
               ? "Pass"
               : "Fail");
    }

    return 0;
}


