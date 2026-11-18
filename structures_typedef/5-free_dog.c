#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees a dog_t structure and its allocated fields.
 * @d: Pointer to the dog_t structure to free.
 *
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);

	free(d);
}
