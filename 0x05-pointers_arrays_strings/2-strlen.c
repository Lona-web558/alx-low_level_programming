#include "main.h"
/**
 * _strlen - return the length
 * 
 * char to check
 * description
 */
int _strlen(char *s)
{
	int a;
	
	for (; *s++;)
		a++;
	return (a);
}

