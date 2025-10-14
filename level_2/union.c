/*
	Assignment name  : union
	Expected files   : union.c
	Allowed functions: write
	--------------------------------------------------------------------------------

	Write a program that takes two strings and displays, without doubles, the
	characters that appear in either one of the strings.

	The display will be in the order characters appear in the command line, and
	will be followed by a \n.

	If the number of arguments is not 2, the program displays \n.

	Example:

	$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
	zpadintoqefwjy$
	$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
	df6vewg4thras$
	$>./union "rien" "cette phrase ne cache rien" | cat -e
	rienct phas$
	$>./union | cat -e
	$
	$>
	$>./union "rien" | cat -e
	$
	$>
*/

#include <unistd.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
} 
int ft_already_seen(char c, char *str, int len)
{
    int i = 0;
    while (i < len)
    {
        if (str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int main(int argc, char **argv)
{
	char	*arg_1;
	char	*arg_2;
	char	letter;
	int		j;
	int		i;
	int		size_arg_1;

	i =0;
	j = 0;
	if (argc == 3)
	{
		arg_1 = argv[1];
		arg_2 = argv[2];

		while (arg_1[i])
    	{
			letter = arg_1[i];
			if (!ft_already_seen(letter, arg_1, i))
				write(1, &letter, 1);
			i++;
    	}
		size_arg_1 = ft_strlen(arg_1);
		while (arg_2[j])
    	{
			letter = arg_2[j];
			if (!ft_already_seen(letter, arg_1, size_arg_1) && !ft_already_seen(letter, arg_2, j))
				write(1, &letter, 1);
			j++;
    	}
	}
	write(1, "\n", 1);
	return 0;
}