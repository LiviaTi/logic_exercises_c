#include <unistd.h>

int main(int argc, char *argv[])
{
	char *arg;
	int		i;
	char letter;

	i = 0;
	if (argc == 2)
	{
		arg = argv[1];
		while (arg[i] != '\0')
		{
			if ((arg[i] >= 'a' && arg[i]<= 'm') || (arg[i] >= 'A' && arg[i]<= 'M'))
			{
				letter = arg[i] + 13;
			}
			else if((arg[i] >= 'm' && arg[i]<= 'z') || (arg[i] >= 'M' && arg[i]<= 'Z'))
			{
				letter = arg[i] - 13;
			}
			else
			{
				letter = arg[i];
			}
			write(1, &letter, 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}