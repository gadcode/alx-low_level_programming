#include "main.h"

/**
* _isupper - Checks for uppercase
*@c: The letter to be checked
*
* Author: @gadcode
* Date: 15/09/2023
*
* Return: 1 if character is uppercase, otherwise 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
