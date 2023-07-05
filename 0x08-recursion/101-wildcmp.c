#include "main.h"

/**
 * st_match - check string after * matches s1
 * @s1: 1st string
 * @s2: 2nd string
 * @aft_wildcd: holder in position right after *
 * Return: 1 on success, 0 if not
 */

int st_match(char *s1, char *s2, char *aft_wildcd)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '*')
		return (st_match(s1, s2 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 != '\0')
		return (0);
	if (*s2 == '*')
		return (st_match(s1, s2 + 1, s2 + 1));
	if (*s1 == *s2)
		return (st_match(s1 + 1, s2 + 1, aft_wildcd));
	else
		return (st_match(s1 + 1, aft_wildcd, aft_wildcd));
}

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
	if (*s2 == *s1)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (st_match(s1, (s2 + 1), (s2 + 1)));
	else
		return (0);
}
