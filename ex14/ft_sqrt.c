/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miduarte <miduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:29:06 by miduarte          #+#    #+#             */
/*   Updated: 2025/04/07 14:42:38 by miduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 0;
	if (nb < 0 || nb == 0)
		return (0);
	while (sqrt < nb)
	{
		if ((sqrt * sqrt) == nb)
			return (sqrt);
		else
			sqrt++;
	}
	return (0);
}
