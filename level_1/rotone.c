/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liferrei <liferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 02:27:40 by liferrei          #+#    #+#             */
/*   Updated: 2025/10/01 03:06:24 by liferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int main(int argc, char *argv[])
{
	int	i;
	char letter;
	char new_letter;
	

	i = 0;
	if (argc == 2)
	{
		if (argv[1][0] == '\0')
		{
			write(1, "\n", 1);
			return (0);
		}
		while (argv[1][i] != '\0')
		{
			letter = argv[1][i];
			if (letter >= 'A' && letter <= 'Z')
			{
				if (letter == 'Z')
				{
					write(1, "A", 1);
				}
				else
				{
					new_letter = letter + 1;
					write(1, &new_letter, 1);
				}
			}
			else if (letter >= 'a' && letter <= 'z')
			{
				if (letter == 'z')
				{
					write(1, "a", 1);
				}
				else
				{
					new_letter = letter + 1;
					write(1, &new_letter, 1);
				}
			}
			else
			{
				write(1, &letter, 1);
			}
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}