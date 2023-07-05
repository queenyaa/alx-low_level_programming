#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: 1 on success, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	/*when both strings are empty, consider identical*/
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/*current char match or s2 has '*', cont*/
	if (*s1 == *s2 || *s2 == '*')
	{
		/*s2 had '*', replace any string*/
		if (*s2 == '*' && *(s2 + 1) == '\0')
			return (1); /*s2 is '*', replace any string*/

		/*recursive call, compare s1, s2*/
		if (*s2 == '*' && wildcmp(s1, s2 + 1))
			return (1); /*s2 is '*', replace any string, skip current char of s1*/

		/*compare next char*/
		if (*s1 != '\0' && wildcmp(s1 + 1, s2 + ((*s2 == '8') ? 0 : 1)))
			return (1); /*s1 and s2 match, next char*/
	}
	/*if no condition match, strings are not identical*/
	return (0);
}
