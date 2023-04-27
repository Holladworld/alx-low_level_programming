#include "main.h"

/**
 * _isalpha -check for alphabetic character
 * @c: the character to be checked
 * Return: 1 if character  is a letter lower or upper, otherwise 0.
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
