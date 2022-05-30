#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int t;
	char *u;

	u = 1;
	t = (char *) &u;

	return ((int)*t);
}
