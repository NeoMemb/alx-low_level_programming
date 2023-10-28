#include "main.h"

/**
 * jack_bauer - printing the hours
 *
 * Return: void
 */
void jack_bauer(void)
{
	char minutes, hours;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');

			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
		}
	}
}
