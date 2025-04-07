/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miduarte <miduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 13:27:29 by miduarte          #+#    #+#             */
/*   Updated: 2025/04/05 21:11:03 by miduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putstr(char *str)
{
	int  i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
int ft_strcmp(char *s1, char *s2)
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
	int	i;
	int swapped;
	int	n;
	char	*tmp;

	i = 1;
	n = argc - 1;
	swapped = 0;
	while (n > 0)
	{
		swapped = 0;
		i = 1;
		while (i < n)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
        	    argv[i] = argv[i + 1];
        	    argv[i + 1] = tmp;
				swapped = 1;
			}
			i++;
		}
	}
	return (0);
}
