
#include <unistd.h>
int ft_strlen(char *str)
{
	int i;
	 
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
int main(int argc, char *argv[])
{
	char *arg;
	char *letter_1;
	char *letter_2;
	char letter;
	int		i;
	int     j;


	j = 0;
	i = 0;
	if (argc == 4)
	{
		arg = argv[1];
		letter_1 = argv[2];
		letter_2 = argv[3];

		if ((ft_strlen(letter_1) > 1) || (ft_strlen(letter_2) > 1))
		{
			write(1, "\n", 1);
			return(0);
		}

		while (arg[i] != '\0')
		{
			if (arg[i] == letter_1[j])
			{
				letter = letter_2[j];
			}
			else
			{
				letter = arg[i];
			}
			write(1, &letter, 1);
			i++;
		}
	}
	write (1,"\n",1);
	return(0);
}