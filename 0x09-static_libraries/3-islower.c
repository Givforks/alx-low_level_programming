#include "main.h"

/**
 * _islower - find lowercase character
 * @o: the character to be spotted
 * Return: 0 for lowercase or 1 for anything found
 */

int _islower(int o)
{
	if (o >= 97 && o <= 122)
	{
	return (1);
	}
	return (0);
}
