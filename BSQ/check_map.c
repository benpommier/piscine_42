/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:13:36 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/28 15:14:31 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"

int	check_all(char *str)
{
	if (nb_line(str) == 0)
		return (0);
	if ((check_lig(str) == 0)
		|| (check_sign(str) == 0)
		|| (check_relation(str) == 0)
		|| (check_one(str) == 0))
		return (0);
	return (1);
}

int	check_lig(char *str)
{
	int	i;
	int	j;
	int	x;
	int	tmp;

	i = ft_strlen_backslash(str) + 1;
	j = -1;
	x = 0;
	while (str[i + x] != '\n')
		x++;
	tmp = x;
	while (str[i + ++j] != '\0')
	{
		if (str[i + j] == '\n')
		{
			if (j != x)
				return (0);
			else
			{
				x += tmp + 1;
				j++;
			}
		}
	}
	return (1);
}

int	check_sign(char *str)
{
	char	*dest;
	int		len_1st_lin;
	int		pos_sign;

	len_1st_lin = ft_strlen_backslash(str);
	pos_sign = ft_pos_sign(str, len_1st_lin);
	dest = malloc(sizeof(char) * len_1st_lin + 1);
	dest = ft_strncpy(dest, str, len_1st_lin, pos_sign);
	if (ft_strcmp(dest, str, len_1st_lin) == 0)
		return (0);
	return (1);
}

int	check_relation(char *str)
{
	int	i;
	int	begin;
	int	j;

	i = nb_line(str);
	if (i == 0)
		return (0);
	begin = ft_strlen_backslash(str) + 1;
	j = 0;
	while (str[begin] != '\0')
	{
		if (str[begin] == '\n')
			j++;
		begin++;
	}
	if (i != j)
		return (0);
	return (1);
}

int	check_one(char *str)
{
	int	begin;

	begin = ft_strlen_backslash(str) + 1;
	if (str[begin + 1] == '\0')
		return (0);
	return (1);
}
