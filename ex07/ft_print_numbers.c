/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miduarte <miduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 12:23:12 by miduarte          #+#    #+#             */
/*   Updated: 2025/04/04 12:30:38 by miduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_numbers(void)
{
	int	i;

	i = 0;
	while (i <= 10)
	{
		ft_putchar(i + '0');
		i++;
	}
}

int main (void)
{
	ft_print_numbers();
	return (0);
}