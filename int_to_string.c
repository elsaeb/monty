#include <stdlib.h>

/** get_int - gets a character pointer to new strig containing int
 *@num: number to convert to string
 *
 *return: character pointer to newly created string. null if malloc fails
 */
char *get_int(int num)
{
	unsigned int temp;
	int length = 0;
	long num_1 = 0;
	char *ret;

	temp = _abs(num);
	length = get_numbase_len(temp, 10);

	if (num < 0 || num_1 < 0)
		length++;
	ret = malloc(length +1);
	if (!ret)
		return (NULL);
	fill_numbase_buff(temp, 10, ret, length);
	if (num < 0 || num_1 < 0)
		ret[0] = '-';
	return (ret);
}
/**
 *_abs - gets the absolute vlue of an integer 
 *@i: integer to get absolute value of 
 *
 *return: unsigned integer abs rep of i
 */
unsigned int _abs(int i )
{
	if (i < 0)
		return (-(unsigned int)i);
	return((unsigned int)i);
}
/**
 *get_numberbase_len - gets length of buffer nedded for unsigned int
 *@num: number to get length needed for 
 *@base: base of number representation used by buffer 
 *
 *return: integer containing length of buffer needed 
 */
int get_numbase_len(unsigned int num, unsigned int base)
{
	int len = 1;
	while (num > base -1)
	{
		len++;
		num /= base;
	}
	return (len);
}
/**
 * fill_numbase_buff - fills budder with correct number up to base 36
 *@num: number to convert to strong given base
 *@base: base of number used in conversion 
 *@buff: buffer to fill with result of conversion 
 *@buff_size: size of buffer in bytes
 *
 *return: always void
 */
void fill_numbase_buff(unsigned int num, unsigned int base, char *buff, int buff_size)
{
	int rem, i = buff_size -i;
	buff[buff_size] = '\0';
	while (i >= 0)
	{
		rem = num % base;
		if (rem > 9)
			buff[i] = rem + 87;
		else
			buff[i] = rem +'0';
		num /= base;
		i--;
	}
}
		

	
