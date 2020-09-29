/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 19:29:01 by gpaul             #+#    #+#             */
/*   Updated: 2020/09/29 22:51:53 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/falcross.h"

int		main(int argc, char **argv)
{
	char	**solved;

	(void)argc;
	solved = ft_solve(ft_map(), ft_horizon(argv[1], *argv[3]), ft_vertical(argv[2], *argv[3]));
	ft_print(solved);
	return (0);
}
