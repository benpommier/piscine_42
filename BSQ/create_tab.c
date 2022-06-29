/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lulaens <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 12:06:57 by lulaens           #+#    #+#             */
/*   Updated: 2022/06/28 13:56:47 by lulaens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"

void	print_tab(int **tab, char *str)
{
	int	i;
	int	j;
	int	lin;
	int	col;

	i = 0;
	lin = nb_line(str) - 1;
	col = nb_col(str) - 1;
	while (i <= lin)
	{
		j = 0;
		while (j <= col)
		{
			print_tab_2(i, j, tab, str);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

void	print_tab_2(int i, int j, int **tab, char *str)
{
	char	*dest;

	dest = sign(str);
	if (tab[i][j] == 0)
		write(1, &dest[0], 1);
	else if (tab[i][j] == 1)
		write(1, &dest[1], 1);
	else if (tab[i][j] == 2)
		write(1, &dest[2], 1);
}

char	*sign(char *str)
{
	char	*dest;
	int		len_1st_lin;
	int		counter;
	int		i;

	len_1st_lin = ft_strlen_backslash(str);
	counter = ft_pos_sign(str, len_1st_lin);
	i = 0;
	dest = malloc(sizeof(char) * (len_1st_lin - counter) + 1);
	while (str[counter + i] != '\n')
	{
		dest[i] = str[counter + i];
		i++;
	}
	return (dest);
}

void	create_table(char *str)
{
	char	*dest;
	int		i;
	int		j;
	int		x;
	int		**tab;

	i = 0;
	j = 0;
	x = ft_strlen_backslash(str);
	dest = sign(str);
	tab = malloc(sizeof(int *) * (nb_line(str) + 1));
	tab[i] = malloc(sizeof(int) * (nb_col(str) + 1));
	while (str[++x] != '\0')
	{
		if (str[x] == '\n')
			malloc_tab(&i, &j, tab, str);
		else if (str[x] == dest[0])
			tab[i][j] = 0;
		else if (str[x] == dest[1])
			tab[i][j] = 1;
		j++;
	}
	ft_square(-1, -1, tab, str);
}

void	malloc_tab(int *i, int *j, int **tab, char *str)
{
	*i = *i + 1;
	tab[*i] = malloc(sizeof(int) * (nb_col(str) + 1));
	*j = -1;
}
