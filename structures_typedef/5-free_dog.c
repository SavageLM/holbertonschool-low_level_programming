#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * free_dog- function to free dog
 * @d: dog to free
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d);
}
