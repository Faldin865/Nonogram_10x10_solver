/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   falcross.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 16:12:33 by gpaul             #+#    #+#             */
/*   Updated: 2020/09/29 22:51:55 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FALCROSS_H
# define FALCROSS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>


char	**ft_split(char const *s, char c);
char	**ft_vertical(char *str, char sep);
char	**ft_horizon(char *str, char sep);
char	**ft_map(void);
char	**ft_solve(char **map, char **horizontal, char **vertical);
void	ft_print(char **solved);

#endif
