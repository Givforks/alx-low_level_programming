#include "main.h"

/**
 * _isalpha - finding alphabetic character
 * @g: the letter to find
 * Return: 1 for letter alphabet or 0 for others
 */
int _isalpha(int g)
{
if ((g >= 65 && g <= 97) || (g >= 97 && g <= 122))
{
return (1);
}
return (0);
}
