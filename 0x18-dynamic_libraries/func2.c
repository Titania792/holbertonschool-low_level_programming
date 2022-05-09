#include "main.h"
#include <inttypes.h>
/**
* _abs - hehe
* @ab: abs
* Return: value ab
*/
int _abs(int ab)
{
	if (ab < 0)
		ab = ab * -1;
	return (ab);
}

/**
 *_strlen - asd
 *@s: asd
 *Return: asd
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 *_atoi - converts the string argument str to an integer 
 *@s: tyui
 *Return: jkl
 */
int _atoi(char *s)
{
	int op = 1;
	unsigned int n = 0;

	do {
		if (*s == '-')
			op *= -1;

		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');

		else if (n > 0)
			break;

	} while (*s++);

	return (n * op);
}

/**
*_puts - function that prints a string
*@str: string to print
*Return: rtyuio
*/
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}

/**
 *_strcpy - function that copies the string pointed to by src
 *@dest: dfghj
 *@src: sdfgl
 *Return: rtyuj
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];

	return (dest);

}
