#include <stdio.h>

int main(void)
{
    int height;

    // Ask for height until it's between 1 and 8
    do
    {
        printf("Height: ");
        scanf("%d", &height);
    }
    while (height < 1 || height > 8);

    // Print the pyramid
    for (int i = 1; i <= height; i++)
    {
        // Left spaces
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }

        // Left hashes
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        // Gap
        printf("  ");

        // Right hashes
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}

