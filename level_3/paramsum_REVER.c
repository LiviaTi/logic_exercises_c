#include <unistd.h>

char ft_putnumber(int n)
{
	char c;

	if (n >= 10)
		ft_putnumber(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	int	i;
	int j;
	int	count;


	i = 1;
	j = 0;
	count = 0;
	if (argc > 1)
	{
		while (argv[i] != NULL)
		{
			while (argv[i][j] != '\0')
			{
				j++;
			}
			count++;
			j = 0;
			i++;
		}
		ft_putnumber(count);
	}
	else
	{
		write(1, "0", 1);
	}
	write(1, "\n", 1);
}