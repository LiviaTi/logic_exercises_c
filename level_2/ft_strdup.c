#include <string.h>

int	ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
char    *ft_strdup(char *src)
{
	char *dup;
	int	i;
	i = 0;

	dup = (char *)malloc(ft_strlen(src) + 1);
	if (!dup)
		return (NULL);

	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	
	return(dup);
}