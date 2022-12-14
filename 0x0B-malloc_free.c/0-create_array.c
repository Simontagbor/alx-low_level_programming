
/* file - description
 * Author: Simon Tagbor @Simontagbor
 */

#include "main.h"


/**
 * _isupper - Checks for uppercase characters.
 * @size: to be allocated.
 *
 * Return: array 
 */

char *create_array(unsigned int size, char c)
{

	char *array;
	unsigned int index;

	if (size == 0)

		return (NULL);


	array = malloc(sizeof(char) * size);

	if (array == NULL)

		return (NULL);


	for (index = 0; index < size; index++)
								array[index] = c;


	return (array);

}

