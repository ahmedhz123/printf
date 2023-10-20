#include "main.h"

/**
 * _strlen - find the length of the string
 *
 * @str: the string
 *
 * Return: 1
*/

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _strlenc - find the length of the const string
 *
 * @str: the string
 *
 * Return: 1
*/

int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

















