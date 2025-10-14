/*
Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>
*/

#include <unistd.h>

int		ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}

int	ft_is_prime(int n)
{
	int	i = 2;

	if (n < 2)
		return (0);
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int main(int argc, char *argv[])
{
	int	n;
	int		i;
	int	sum;

	i = 2;
	sum = 0;
	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		if (n == 1)
		{
			write(1, "1", 1);
			write(1, "\n", 1);
			return (0);
		}
		while (i <= n)
		{
			if (ft_is_prime(i))
				sum += i;
			i++;
		}
		ft_putnbr(sum);

	}
	else
	{
		write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}