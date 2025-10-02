
int	    is_power_of_2(unsigned int n)
{
	while (n % 2 == 0)
	{
		n = n / 2;
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

