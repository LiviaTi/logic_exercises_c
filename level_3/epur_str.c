#include <stdio.h>
int is_caracter(char c)
{
	if ((c == '\t') ||(c == 32))
	{
		return (1);
	}
	return (0);
}

int main(int argc, char *argv[])
{
	char	*arg;
	int		i;

	i = 0;
	if (argc == 2)
	{
		arg = argv[1];
		while (arg[i] != '\0')
		{
			if (is_space(arg[i]))
			{
				
			}
		}
	}
	write (1, "\n", 1);
	return(0);
}