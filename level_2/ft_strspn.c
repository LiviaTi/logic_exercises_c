/*
Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function 
(man strspn).

The function should be prototyped as follows:

size_t	ft_strspn(const char *s, const char *accept);
*/

#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i;
	size_t j;
	int found;

	i = 0;
	while (s[i])
	{
		j = 0;
		found = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
			j++;
		}
		if (!found)
			return i;
		i++;
	}
	return i;
}

int main(void)
{
	printf("%zu\n", ft_strspn("hello world", "helo ")); // Deve imprimir 6 ("hello ")
	printf("%zu\n", ft_strspn("abcdef", "abc"));        // Deve imprimir 3
	printf("%zu\n", ft_strspn("12345", "123456"));      // Deve imprimir 5
	return 0;
}