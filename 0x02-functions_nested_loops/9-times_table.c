#include "main.h"
/**
* times_table - xdd
*/
void times_table(void)
{
	int a, b, res = 0;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			res = b * a;
			if (b != 0)
			{
				_putchar(' ');
				if (res < 10)
				{
					_putchar(' ');
				}
			}
			if (res > 9)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else
				_putchar(res + '0');

			if (b == 9)
				_putchar('\n');
			else
				_putchar(',');
		}
	}
}
