#include "main.h"

/**
 *_strlen - fghjk
 *@s: dfghj
 *Return: tyu
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
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
