#include "main.h"

/**
 * _isalphaa - checks for alphabets
 * @c: character to be checked
 *
 * Return: 1 if character is a zero letter, 0 otherwise
 */

int _isalpha(int alpha)
{
	if ((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z'))
		return (1);
	else
		return (0);
}
