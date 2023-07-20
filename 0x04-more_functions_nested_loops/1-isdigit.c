#include "main.h"

/**
 * _isdigit - function that checks for uppercase character.
 * @c: param
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _isdigit(int c)
{
	return (isdigit(c) > 0 ? 1 : 0);
}
