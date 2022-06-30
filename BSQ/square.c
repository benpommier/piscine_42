/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:34:44 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/28 15:34:45 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"

int	ft_s(int i, int j, int **tab, char *str);

int	ft_len_square_line(int i, int j, int **tab, char *str)
{
	int	x;
	int	y;
	int	lin;

	x = 1;
	y = ft_len_square_col(i, j, tab, str);
	lin = nb_line(str);
	while (i + x < lin && (tab[i + x][j] != 1))
		x++;
	if (y < x - 1)
		return (y);
	else
		return (x - 1);
}

int	ft_len_square_col(int i, int j, int **tab, char *str)
{
	int	y;
	int	col;

	y = 1;
	col = nb_col(str);
	while (j + y < col && (tab[i][j + y] != 1))
		y++;
	return (y - 1);
}

void	ft_square(int i, int j, int **tab, char *str)
{
	int	x;
	int	y;
	int	len_max;

	len_max = 0;
	while (++i <= nb_line(str) - 1)
	{
		while (++j <= nb_col(str) - 1)
		{
			if (ft_s(i, j, tab, str) > len_max && tab[i][j] == 0)
			{
				x = i;
				y = j;
				len_max = ft_s(x, y, tab, str);
			}
		}
		j = -1;
	}
	if (len_max > 0)
		ft_change(x, y, tab, len_max);
	else if (len_max == 0)
		ft_change_zero(tab, str);
	print_tab(tab, str);
}

int	ft_s(int i, int j, int **tab, char *str)
{
	int	x;
	int	y;
	int	len;

	x = 0;
	y = 0;
	len = ft_len_square_line(i, j, tab, str);
	if (tab[i][j] == 0)
	{
		if (len >= 1)
		{
			while (++x <= len)
			{
				y = 0;
				while (++y <= len)
					if (tab[i + x][j + y] != 0)
						reset(&len, &x, &y);
			}
		}
	}
	if (len > 0)
		return (len);
	return (0);
}

void	reset(int *len, int *x, int *y)
{
	*len = *len - 1;
	*x = 0;
	*y = 0;
}
