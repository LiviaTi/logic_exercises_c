/*
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
*/

#include <unistd.h>
int	ft_in_str(char c, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_already_seen(char c, char *str, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
int main(int argc, char *argv[])
{
	char	*arg_1;
	char	*arg_2;
	int		i;
	char	letter;

	i = 0;
	if (argc == 3)
	{
		arg_1 = argv[1];
		arg_2 = argv[2];
		while (arg_1[i])
		{
			letter = arg_1[i];
			if (ft_in_str(arg_1[i], arg_2) && !ft_already_seen(letter, arg_1, i))
				write(1, &letter, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}