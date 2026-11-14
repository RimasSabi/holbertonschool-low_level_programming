#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: String to convert
 *
 * Return: Converted integer, or 0 if no digits are found
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign = -sign;

		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				result = result * 10 + (s[i] - '0');
				i++;
			}
			break;
		}

		i++;
	}

	if (sign == -1)
		return (-result);

	return (result);
}
