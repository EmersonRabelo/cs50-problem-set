#include <cs50.h>
#include <stdio.h>

void printBrick(char brick);
void printSpace();
void printGap();
void createParallelPyramids(int height);

int main()
{
    int height;
    int maxHeight = 8;

    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0 || height > maxHeight);

    createParallelPyramids(height);
}

void createParallelPyramids(int height)
{
    char brick = '#';

    for (int lines = 0; lines < height; lines++)
    {
        for (int space = height - 1; space > lines; space--)
        {
            printSpace();
        }

        for (int j = 0; j <= lines; j++)
        {
            printBrick(brick);
        }
        printGap();
        for (int i = 0; i <= lines; i++)
        {
            printBrick(brick);
        }
        printf("\n");
    }
}

void printBrick(char brick)
{
    printf("%c", brick);
}

void printGap()
{
    printf("  ");
}

void printSpace()
{
    printf(" ");
}
