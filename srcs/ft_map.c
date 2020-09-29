/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 16:10:50 by gpaul             #+#    #+#             */
/*   Updated: 2020/09/29 22:50:33 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/falcross.h"



char	**ft_map(void)
{
	char	**map;
	int		i;
	int		x;

	x = 0;
	i = 0;

	if (!(map = malloc(sizeof(char*) * 10 + 1)))
		return (0);
	while (i < 12)
	{
		if (!(map[i] = malloc(sizeof(char) * 10 + 1)))
			return (0);
		i++;
	}
	i = 0;
	while (x < 10)
	{
		while (i < 10)
		{
			map[x][i] = '.';
			i++;
		}
		map[x][i] = '0';
		x++;
		if (x == 10)
			map[x - 1][i + 1] = '\0';
		i = 0;
	} 
	return (map);
}

char		**ft_horizon(char *str, char sep)
{
	char **horizon;

	horizon = ft_split(str, sep);

	return (horizon);
}

char	**ft_vertical(char *str, char sep)
{
	char	**vertical;

	vertical = ft_split(str, sep);

	return (vertical);
}
