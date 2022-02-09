#include "main.h"

/**
* _isupper - xdd
* @c: aaaaa
* Return: 1 if is a letter, 0 if is otherwise
*/
int _isupper(char c)
{
	if (c > 'A' && c < 'Z')
		return (1);
		else
			return (0);
}
