/*
	Assignment name  : repeat_alpha
	Expected files   : repeat_alpha.c
	Allowed functions: write
	--------------------------------------------------------------------------------

	Write a program called repeat_alpha that takes a string and display it
	repeating each alphabetical character as many times as its alphabetical index,
	followed by a newline.

	'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

	Case remains unchanged.

	If the number of arguments is not 1, just display a newline.

	Examples:

	$>./repeat_alpha "abc"
	abbccc
	$>./repeat_alpha "Alex." | cat -e
	Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
	$>./repeat_alpha 'abacadaba 42!' | cat -e
	abbacccaddddabba 42!$
	$>./repeat_alpha | cat -e
	$
	$>
	$>./repeat_alpha "" | cat -e
	$
	$>
*/

#include <unistd.h>

int main(int argc, char *argv[])
{
	int	repeat;
	int	i;
	char *arg;
	char letter;

	i = 0;
	repeat = 0;
	if (argc == 2)
	{
		arg = argv[1];
		while (arg[i] != '\0')
		{
			letter = arg[i];
			if (arg[i] >= 'a' && arg[i] <= 'z')
				repeat = arg[i] - 96;
			else if (arg[i] >= 'A' && arg[i] <= 'Z')
				repeat = arg[i] - 64;
			else
				repeat = 1;
			while (repeat > 0)
			{
				write(1, &letter, 1);
				repeat--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}