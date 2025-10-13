/*
	Assignment name  : alpha_mirror
	Expected files   : alpha_mirror.c
	Allowed functions: write
	--------------------------------------------------------------------------------

	Write a program called alpha_mirror that takes a string and displays this string
	after replacing each alphabetical character by the opposite alphabetical
	character, followed by a newline.

	'a' becomes 'z', 'Z' becomes 'A'
	'd' becomes 'w', 'M' becomes 'N'

	and so on.

	Case is not changed.

	If the number of arguments is not 1, display only a newline.

	Examples:

	$>./alpha_mirror "abc"
	zyx
	$>./alpha_mirror "My horse is Amazing." | cat -e
	Nb slihv rh Znzarmt.$
	$>./alpha_mirror | cat -e
	$
	$>
*/

#include <unistd.h>

int main(int argc, char *argv[])
{
	char *arg;
	int		i;
	char	letter;

	i = 0;
	if (argc == 2)
	{
		arg = argv[1];
		while (arg[i])
		{
			if (arg[i] >= 'a' && arg[i] <= 'z')
				letter = 'z' - (arg[i] - 'a');
			else if (arg[i] >= 'A' && arg[i] <= 'Z')
				letter = 'Z' - (arg[i] - 'A');
			else
				letter = arg[i];
			write(1 , &letter, 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}