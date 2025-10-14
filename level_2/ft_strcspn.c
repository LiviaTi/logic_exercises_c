/*
Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);
*/

#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i;
	size_t j;

	i =0;
	j =0;
	while(s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
int main(void)
{
	printf("%zu\n", ft_strcspn("hello world", " o")); // Deve imprimir 1
	printf("%zu\n", ft_strcspn("abcdef", "xyz"));     // Deve imprimir 6 (nenhum encontrado)
	printf("%zu\n", ft_strcspn("12345", "345"));      // Deve imprimir 2 (primeiro '3' aparece na posição 2)
	return 0;
}