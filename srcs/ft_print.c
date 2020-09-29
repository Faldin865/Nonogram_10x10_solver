/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 19:35:00 by gpaul             #+#    #+#             */
/*   Updated: 2020/09/30 00:07:25 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/falcross.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char **solved)
{
	int		i;
	int		x;

	i = 0;
	x = 0;
	while(solved[x][i])
	{
		while(solved[x][i + 1] != 0)
		{
			ft_putchar(solved[x][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		x++;
	}
}


void	ft_remove_x(char **solved)
{
	int		i;
	int		x;

	i = 0;
	x = 0;
	while (x < 11)
	{
		while (solved[x][i] != '0')
		{
			if (solved[x][i] == 'x')
				solved[x][i] = '.';
			i++;
		}
		i = 0;
		x++;
	}
}
