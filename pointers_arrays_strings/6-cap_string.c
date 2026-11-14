#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word
 * @s: String to capitalize
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *s)
{
	int i;
	int start;

	i = 0;
	start = 1;
	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
		    s[i] == ',' || s[i] == ';' || s[i] == '.' ||
		    s[i] == '!' || s[i] == '?' || s[i] == '"' ||
		    s[i] == '(' || s[i] == ')' || s[i] == '{' ||
		    s[i] == '}')
			start = 1;
		else
		{
			if (start && s[i] >= 'a' && s[i] <= 'z')
				s[i] -= ('a' - 'A');
			start = 0;
		}
		i++;
	}
	return (s);
}
