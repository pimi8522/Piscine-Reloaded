/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miduarte <miduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 12:36:38 by miduarte          #+#    #+#             */
/*   Updated: 2025/04/05 21:29:03 by miduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_swap(char **a, char **b)
{
    char    *tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

void    ft_sort_params(int argc, char **argv)
{
    int    i;
    int    swapped;

    swapped = 1;
    while (swapped)
    {
        swapped = 0;
        i = 1;
        while (i < argc - 1)
        {
            if (argv[i][0] > argv[i + 1][0])
            {
                ft_swap(&argv[i], &argv[i + 1]);
                swapped = 1;
            }
            i++;
        }
    }
}

int    main(int argc, char *argv[])
{
    int    i;

    ft_sort_params(argc, argv);
    i = 1;
    while (i < argc)
    {
        while (*argv[i])
        {
            ft_putchar(*argv[i]);
            argv[i]++;
        }
        ft_putchar('\n');
        i++;
    }
    return (0);
}