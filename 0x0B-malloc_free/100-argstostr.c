#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *str;

	if (agc == 0 || agv == NULL)
		return (NULL);

	for (i = 0; i < agc; i++)
	{
		for (n = 0; agv[i][n]; n++)
			l++;
	}
	l += agc;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < agc; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[r] = agv[i][n];
		        r++;
	        } 
	        if (str[r] == '\0')
	        {
			str[r++] = '\n';
	        }
	}
