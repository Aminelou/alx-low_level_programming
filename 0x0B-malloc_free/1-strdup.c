#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *amn;
	int i, j = 0;

	if (str == 0)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	amn = malloc(sizeof(char) * (i + 1));

	if (amn == 0)
		return (0);

	for (j = 0; str[j]; j++)
		amn[j] = str[j];

	return (amn);
}
