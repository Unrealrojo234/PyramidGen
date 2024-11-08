#include <stdio.h>
#include <string.h>

int main(void)
{
    char shape[] = "#";

    int size;

    char msg[] = "\nEnter the size of the triangle: ";

    printf("%s", msg);

    scanf("%d", &size);

    printf("\n#\n");

    for (int i = 0; i <= size; i++)
    {
        strcat(shape, "#");
        printf("%s\n", shape);
    }

    return 0;
}