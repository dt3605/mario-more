#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
    } while (h < 1 || h > 8);

    for (int row = 1; row <= h; row++)
    {
        for (int s = 0; s < h - row; s++)
        {
            printf(" ");
        }
        for (int j = 0; j < row; j++)
        {
            printf("#");
        }
        printf("  ");
        for (int j = 0; j < row; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
