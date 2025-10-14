/*
	Assignment name  : pgcd
	Expected files   : pgcd.c
	Allowed functions: printf, atoi, malloc, free
	--------------------------------------------------------------------------------

	Write a program that takes two strings representing two strictly positive
	integers that fit in an int.

	Display their highest common denominator followed by a newline (It's always a
	strictly positive integer).

	If the number of parameters is not 2, display a newline.

	Examples:

	$> ./pgcd 42 10 | cat -e
	2$
	$> ./pgcd 42 12 | cat -e
	6$
	$> ./pgcd 14 77 | cat -e
	7$
	$> ./pgcd 17 3 | cat -e 
	1$
	$> ./pgcd | cat -e
	$
*/

#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	printf("%c",c);
}

void ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');                                                                                                                                            
}
int	ft_hcd(int n1, int n2)
{
	int		hdc;
	int		i;

	i = 1;
	hdc = 1;
	while ((i <= n1) && (i <= n2))
	{
		if ((n1 % i == 0) && (n2 % i == 0))
			hdc = i;
		i++;
	}
	return (hdc);
}

int main(int argc, char *argv[])
{
	int num_1;
	int num_2;
	int result;

	num_1 = 0;
	num_2 = 0;
	result = 0;
	if (argc == 3)
	{
		num_1 = atoi(argv[1]);
		num_2 = atoi(argv[2]);

		result = ft_hcd(num_1, num_2);
		ft_putnbr(result);
	}
	printf("\n");
	return (0);
}