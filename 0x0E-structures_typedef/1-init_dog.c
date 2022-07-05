#include "dog.h"
#include <stdlib.h>
/**
 *init_dog-Initialize a struct.
 *@d: Pointer to an instance of a struct.
 *@name:first element of a struct
 *@age:second element of the struct.
 *@owner:Third element of a struct.
 *
 *Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{

		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
