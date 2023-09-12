#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: is the character to be checked
 * The Return value is 1 if c is a letter, otherwise equals to 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
