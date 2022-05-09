#include "main.h"
#include <unistd.h>
#include <ctype.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* _isalpha - xdd
* @c: aaaaa
* Return: 1 if is a letter, 0 if is otherwise
*/
int _isalpha(int c)
{
	if (c > 65 && c < 122)
		return (1);
		else
			return (0);
}

/**
*  _islower - abcd
* Return: 1 if int is lowercase, 0 if otherwise
* @c: tijf
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}

/**
* _isupper - xdd
* @c: aaaaa
* Return: 1 if is a letter, 0 if is otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
		else
			return (0);
}

/**
* _isdigit - xdd
* @c: aaaaa
* Return: 1 if is a letter, 0 if is otherwise
*/
int _isdigit(int c)
{
	if (c >= 48  && c <= 57)
		return (1);
		else
			return (0);
}
