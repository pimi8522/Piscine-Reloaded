/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miduarte <miduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:05:05 by miduarte          #+#    #+#             */
/*   Updated: 2025/04/07 16:24:59 by miduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	arrsize;
	int	*arr;
	int	i;

	i = 0;
	if (max <= min)
		return (NULL);
	arrsize = max - min;
	arr = malloc(sizeof(int) * arrsize);
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
