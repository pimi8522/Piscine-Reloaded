/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miduarte <miduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 12:36:38 by miduarte          #+#    #+#             */
/*   Updated: 2025/04/09 11:03:56 by miduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if ((s1[i] - s2[i]) != 0)
		{
			return (s1[i] - s2[i]);
		}
		else
			i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		i2;
	char	*temp;

	i = 1;
	i2 = 1;
	while (i < argc)
	{
		i2 = i + 1;
		while (i2 < argc)
		{
			if (ft_strcmp(argv[i], argv[i2]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i2];
				argv[i2] = temp;
			}
			i2++;
		}
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
