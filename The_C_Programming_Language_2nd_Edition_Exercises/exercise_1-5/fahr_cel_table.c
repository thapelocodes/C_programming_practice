#include <stdio.h>

/**
 * main - prints a table of temperatures in Celsius and their corresponding
 * Fahrenheit temperatures.
 * Return: 0.
 */

int main(void)
{
        float fahr, cel;
        int lower = 0, upper = 300, step = 20;

        cel = lower;

        printf("Celsius To Fahrenheit Table\n\n");

        while (cel <= upper)
        {
                fahr = (9.0 / 5.0) * cel + 32;
                printf("%3.0f %6.1f\n", cel, fahr);
                cel += step;
        }
        return (0);
}
