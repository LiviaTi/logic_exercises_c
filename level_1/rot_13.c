#include <unistd.h>

int main(int argc, char *argv[])
{
	char	*str;
	int		i;

	i = 0;
	if (argc == 2)
	{
		str = argv[1];
		while (str[i] != '\0')
		{
			if ((str[i] >= 'a' &&  str[i] <= 'm') || (str[i] >= 'A' &&  str[i] <= 'M'))
			{
				str[i] += 13;
				write(1, &str[i], 1);
			}
			else if ((str[i] >= 'n' &&  str[i] <= 'z') || (str[i] >= 'N' &&  str[i] <= 'Z'))
			{
				str[i] -= 13;
				write(1, &str[i], 1);
			}
			else
			{
				write(1, &str[i], 1);
			}
			i++;
		}
		if (str[i]=='\0')
		{
			write(1, "\n", 1);
			return(0);
		}
	}
	else
	{
		write(1,"\n",1);
	}
	return (0);
}