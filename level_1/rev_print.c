/*
	Assignment name  : rev_print
	Expected files   : rev_print.c
	Allowed functions: write
	--------------------------------------------------------------------------------

	Write a program that takes a string, and displays the string in reverse
	followed by a newline.

	If the number of parameters is not 1, the program displays a newline.

	Examples:

	$> ./rev_print "zaz" | cat -e
	zaz$
	$> ./rev_print "dub0 a POIL" | cat -e
	LIOP a 0bud$
	$> ./rev_print | cat -e
	$
*/

#include <unistd.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int main (int argc, char *argv[])
{
	char *arg;
	int		i;
	int		size;

	i = 0;
	size = 0;
	if (argc == 2)
	{
		arg = argv[1];
		size = ft_strlen(arg) - 1;
		while (size >= 0)
		{
			write(1, &arg[size], 1);
			size--;
		}
	}
	write (1, "\n", 1);
	return (0);
}