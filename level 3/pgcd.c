
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	number;
	int	i;
	int	sign;
	int convert;

	number = 0;
	i = 0;
	sign = 1;
	convert = 0;

	while (str[i] == 32 || (str[i] >= 9 && str[i]<= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	} 
	while ((str[i] != '\0') && (str[i] >= '0'))
	{
		convert = convert * 10 + (str[i] - '0');
		i++;
	}

	number = sign * convert;
	return (number);
}

int ft_mmc(int number_1, int number_2)
{
	int		div;
	int		find;

	div = 2;
	find = 0;
	while (find == 0)
	{
		if ((number_1 % div == 0) && (number_2 % div == 0))
		{
			find = 1;
		}
		else
		{
			div += 1;
		}
	}

}
int main(int argc, char *argv[])
{
	int		number_1;
	int		number_2;
	int		result;

	if (argc == 3)
	{
		number_1 = ft_atoi(argv[1]);
		number_2 = ft_atoi(argv[2]);
		result = ft_mmc(number_1, number_2);
		return (result);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}