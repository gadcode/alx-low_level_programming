#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalizes strings
 * @str: the parameter
 *
 * Author: @gadcode
 * Date: 23/09/2023
 *
 * Return: The capitalized string
 */

char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize = 1;

	while (*ptr != '\0')
	{
		if (isspace(*ptr) || *ptr == ',' || *ptr == ';' || *ptr == '.'
			|| *ptr == '!' || *ptr == '?' || *ptr == '"' || *ptr == '('
			|| *ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			capitalize = 1;
		}
		else if (capitalize && islower(*ptr))
		{
			*ptr = toupper(*ptr);
			capitalize = 0;
		}
		else
		{
			capitalize = 0;
		}

		ptr++;
	}

	return (str);
}
