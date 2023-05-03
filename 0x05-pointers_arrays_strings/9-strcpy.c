#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * char*_strcpy - functions that copies string pointed to by src
 * @src: copy from
 * @dest: copy to
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; x < i; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
