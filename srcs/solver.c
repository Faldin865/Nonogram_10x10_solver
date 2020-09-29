/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 18:24:11 by gpaul             #+#    #+#             */
/*   Updated: 2020/09/29 22:50:15 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/falcross.h"

void	ft_init_h(char **map, char **H, int x)
{
	int		i;
	int		n;
	int		cpy;
	int		y;

	n = 0;
	i = 0;
	y = 0;
	while (H[x][i])
	{
		cpy = (H[x][i] - 48);
		while (n < cpy)
		{
			map[y + n][x] = 'O';
			n++;
		}
		n++;
		y = y + n;
		n = 0;
		i++;
	}
	while (H[x][i])
	{
		H[x][i] = '0';
		i++;
	}
}

char	**ft_initial_h(char **map, char **H)
{
	int		i;
	int		x;
	int		count;

	i = 0;
	x = 0;
	while (H[x][i] != '@')
	{
		count = 0;
		while (H[x][i])
		{
			count = count + (H[x][i] - 48) + 1;
			i++;
		}
		if (count == 11)
			ft_init_h(map, H, x);
		i = 0;
		x++;
	}
	return (map);
}

void	ft_init_v(char **map, char **V, int x)
{
	int		i;
	int		n;
	int		cpy;
	int		y;

	n = 0;
	i = 0;
	y = 0;
	while (V[x][i])
	{
		cpy = (V[x][i] - 48);
		while (n < cpy)
		{
			map[x][y + n] = 'O';
			n++;
		}
		n++;
		y = y + n;
		n = 0;
		i++;
	}
	while (V[x][i])
	{
		V[x][i] = '0';
		i++;
	}
}

char	**ft_initial_v(char **map, char **V)
{
	int		i;
	int		x;
	int		count;

	i = 0;
	x = 0;
	while (V[x][i] != '@')
	{
		count = 0;
		while (V[x][i])
		{
			count = count + (V[x][i] - 48) + 1;
			i++;
		}
		if (count == 11)
			ft_init_v(map, V, x);
		i = 0;
		x++;
	}
	return (map);
}

char	**ft_solve(char **map, char **horizontal, char **vertical)
{
	ft_initial_h(map, horizontal);
	ft_initial_v(map, vertical);
	return (map);
}
