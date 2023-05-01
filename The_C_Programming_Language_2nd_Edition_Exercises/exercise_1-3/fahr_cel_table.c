#include <stdio.h>

/**
 * main - prints a table of temperatures in Fahrenheit and their
 * corresponding celsius temperatures.
 * Return: 0.
 */

int main(void)
{
        float fahr, cel;
        int lower = 0, upper = 300, step = 20;

        fahr = lower;

        printf("Fahrenheit to Celsius Table\n\n");

        while (fahr <= upper)
        {
                cel = (5.0 / 9.0) * (fahr - 32.0);
                printf("%3.0f %6.1f\n", fahr, cel);
                fahr += step;
        }
        return (0);
}
