/*
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);
*/

#include <stdlib.h>
int ft_count_len(int nbr)
{
	int i;

	i = 0;
	if (nbr <= 0)
		i++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int len;
	long num;
	char *str;
	int i;

	i = 0;
	len = ft_count_len(nbr);
	num = nbr;
	str = (char *)malloc((sizeof(char) * (len + 1)));
	if (!str)
		return (NULL);
	
	str[len] = '\0';
	i = len - 1;

	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 9)
	{
		str[i] = num % 10 + '0';
		num = num / 10;
		i--;
	}
	str[i] = num + '0';
	return (str);		
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
	int num;
	char *number;

	num = atoi(argv[1]);
	number = ft_itoa(num);
	printf("%s",number);

	return (0);
}
*/
