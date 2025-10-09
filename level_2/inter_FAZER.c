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

int main(int argc, char *argv[])
{
	char	*arg_1;
	char	*arg_2;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		arg_1 = argv[1];
		arg_2 = argv[2];

		while (arg_1[i] != '\0')
		{
			j = 0;
			while (arg_2[j] != '\0')
			{
				if (arg_1[i] == arg_2[j])
				{
					write(1, &arg_1[i], 1);
					
					break;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}