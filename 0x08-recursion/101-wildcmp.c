#include "main.h"

/**
 * match_wildcard_recursive - recursively walks ^ comparee two strings
 * @s1: * char string one
 * @s2: * char string two
 * @i: int loop counter var
 * @j: int loop counter var
 *
 * Return: int bool
 */
int match_wildcard_recursive(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (match_wildcard_recursive(s1, s2, i + 1, j + 1));
	if (s2[j] == '*' && s1[i] == '\0')
		return (match_wildcard_recursive(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (match_wildcard_recursive(s1, s2, i + 1, j) ||
			match_wildcard_recursive(s1, s2, i, j + 1));
	return (0);

}

/**
 * wildcmp - compares two string while respecting wildcards in str2
 * @s1: * char string one
 * @s2: * char string two
 *
 * Return:int bool
 */
int wildcmp(char *s1, char *s2)
{
	return (match_wildcard_recursive(s1, s2, 0, 0));
}
