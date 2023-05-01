#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/**
 * main - controls fahr_cel_table.
 * Return: 0.
 */

void fahr_cel_table(int fahr);

int main(void)
{
        int fahr;

        fahr = LOWER;

        printf("Fahrenheit to Celsius Table\n\n");
        fahr_cel_table(fahr);

        return (0);
}

/**
 * fahr_cel_table - prints a table of fahrenheit temperatures with their
 * corresponding celesius temperstures.
 * @fahr - temperature in fahrenheit.
 * @cel - temperature in celsius.
 * Return: cel.
 */

void fahr_cel_table(int fahr)
{
        while (fahr <= UPPER)
        {
                printf("\t%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
                fahr += STEP;
        }
}
