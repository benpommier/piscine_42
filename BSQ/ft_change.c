/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 09:41:10 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/29 09:41:22 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"

void	ft_change(int i, int j, int **tab, int len)
{
	int	y;
	int	x;

	x = i;
	y = j;
	if (len >= 1)
	{
		while (i <= len + x && tab[i][j] == 0)
		{
			while (j <= len + y && tab[i][j] == 0)
			{
				tab[i][j] = 2;
				j++;
			}
			i++;
			j = y;
		}
	}
}

void	ft_change_zero(int **tab, char *str)
{
	int	lin;
	int	col;
	int	i;
	int	j;

	lin = nb_line(str) - 1;
	col = nb_col(str) - 1;
	i = -1;
	j = -1;
	while (++i <= lin)
	{
		while (++j <= col)
		{
			if (tab[i][j] == 0)
			{
				tab[i][j] = 2;
				return ;
			}
		}
		j = -1;
	}
}
