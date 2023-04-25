#include "main.h"

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int btw, check;
	unsigned int num, i;

	check = 1;
	btw = n ^ m;
	num = 0;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (check == (btw & check))
			num++;
		check <<= 1;
	}
	return (num);
}
