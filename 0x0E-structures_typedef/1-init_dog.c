#include "dog.h"
#include <stdio.h>

/**
*init_dog - function that initialize a variable of type struct dog
*@d: aa
*@name: aa
*@age: aa
*@owner: aa
*Return: aa
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
