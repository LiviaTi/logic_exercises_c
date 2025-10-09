int is_space(int c)
{
	return ((c >= 9 && c <= 13) || (c == 32));
}
int base_valid(int c, int base)
{
	char *baselow = "0123456789abcdef";
	char *basehigh = "0123456789ABCDEF";

	int i;
	i = 0;
	while (i < base)
	{
		if (c == baselow[i] || c == basehigh[i])
			return (i);
		i++;
	}
	return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
	long int result;
	int sign;
	int i;

	result = 0;
	sign = 1;
	i = 0;
	
	while (is_space(str[i]))
		i++;

	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}

	while (base_valid(str[i], str_base) >= 0)
	{
		result = result * str_base + base_valid(str[i], str_base);
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_atoi_base("2a",16));
}
*/