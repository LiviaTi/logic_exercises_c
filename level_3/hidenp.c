/*
Assignment name  : hidenp
Expected files   : hidenp.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program named hidenp that takes two strings and displays 1
followed by a newline if the first string is hidden in the second one,
otherwise displays 0 followed by a newline.

Let s1 and s2 be strings. We say that s1 is hidden in s2 if it's possible to
find each character from s1 in s2, in the same order as they appear in s1.
Also, the empty string is hidden in any string.

If the number of parameters is not 2, the program displays a newline.

Examples :

$>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e
1$
$>./hidenp "abc" "2altrb53c.sse" | cat -e
1$
$>./hidenp "abc" "btarc" | cat -e
0$
$>./hidenp | cat -e
$
$>
*/

#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}
int main(int argc, char *argv[])
{
	char	*arg_1;
	char	*arg_2;
	int		i;
	int		j;
	int		size_1;

	i = 0;
	j = 0;
	size_1= 0;
	if (argc == 3)
	{
		arg_1 = argv[1];
		arg_2 = argv[2];
		size_1 = ft_strlen(arg_1);
		while (arg_2[j] != '\0')
		{
			if (arg_2[j] == arg_1[i])
				i++;
			j++;
		}
		if (size_1 == i)
			write(1,"1",1);
		else
			write(1,"0",1);
	}
	write(1, "\n", 1);
	return (0);
}