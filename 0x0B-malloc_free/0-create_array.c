#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int j;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == 0)
		return (NULL);

	for (j = 0; j < size; j++)
		ptr[j] = c;
	return (ptr);
}
