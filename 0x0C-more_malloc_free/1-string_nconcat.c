#include <stdlib.h>
#include "holberton.h"
/**
 *string_nconcat - concatenates 2 strings. n bytes of second string
 *@s1: String one
 *@s2: String two
 *@n: bytes to concatenate
 *Return: pointer of a new string If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0, len3 = 0;
	char *s3;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (j = 0; s2[j] != '\0'; j++)
		len2++;
	if (n >= len2)
		n = len2;

	len3 = len1 + n;

	s3 = malloc(sizeof(char) * (len3 + 1));
	if (s3 == '\0')
		return ('\0');
	i = 0;
	j = 0;
	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];
	for (j = 0; j < n; j++)
		s3[i + j] = s2[j];
	s3[i + j] = '\0';
	return (s3);
}
