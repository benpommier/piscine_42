/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 11:27:28 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/18 11:27:30 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		condition_put_4(char *argv, int j, int i);
int		condition_put_123(char *argv, int j, int i);
int		condition_put_4_23(char *argv, int j, int i);
int		nb_lig(int j, int i, int tab[4][4], int t);
int		nb_col(int j, int i, int tab[4][4], int t);
int		ft_nb(int j, int i, int tab[4][4]);
void	condition_besties(char *argv, int j, int i, int tab[4][4]);
void	condition_besties_2(char *argv, int j, int i, int tab[4][4]);
void	condition_besties_3(char *argv, int j, int i, int tab[4][4]);
void	ft_create_tab(char *argv, int counter);
void	ft_while(char *argv, int j, int i, int tab[4][4]);
void	condition_2_xxx4(char *argv, int j, int i, int tab[4][4]);
void	condition_2_xx43(char *argv, int j, int i, int tab[4][4]);
void	condition_3_2x4x(char *argv, int j, int i, int tab[4][4]);
void	condition_3_xx43(char *argv, int j, int i, int tab[4][4]);
void	condition_3_xx42(char *argv, int j, int i, int tab[4][4]);
void	condition2_3_xx14(char *argv, int j, int i, int tab[4][4]);
void	condition2_3_x24x(char *argv, int j, int i, int tab[4][4]);
void	condition3_3_1xx4(char *argv, int j, int i, int tab[4][4]);
void	condition3_3_x1x4(char *argv, int j, int i, int tab[4][4]);
void	condition_reste_col(int j, int i, int tab[4][4], int reset);
void	condition_reste_lig(int j, int i, int tab[4][4], int reset);
void	last_place_1(int j, int i, int tab[4][4]);
void	last_place_2(int j, int i, int tab[4][4]);
void	last_place_3(int j, int i, int tab[4][4]);
void	last_place_4(int j, int i, int tab[4][4]);
void	print_123_colup(char *argv, int j, int i, int tab[4][4]);
void	print_123_coldown(char *argv, int j, int i, int tab[4][4]);
void	print_123_rowleft(int j, int i, int tab[4][4]);
void	print_123_rowright(int j, int i, int tab[4][4]);
void	print_4_23(int j, int i, int tab[4][4]);
void	print_4_23_colup(char *argv, int j, int i, int tab[4][4]);
void	print_4_23_coldown(char *argv, int j, int i, int tab[4][4]);
void	print_4_23_rowleft(int j, int i, int tab[4][4]);
void	print_4_23_rowright(int j, int i, int tab[4][4]);
void	all_conditions_2(char *argv, int j, int i, int tab[4][4]);
void	last_verif(char *argv, int j, int i, int tab[4][4]);
void	ft_putstr(char *str);

void	all_conditions(char *argv, int j, int i, int tab[4][4])
{
	if (condition_put_4(argv, j, i) == 1)
		tab[i][j] = 4;
	if (condition_put_123(argv, j, i) == 1)
		print_123_colup(argv, j, i, tab);
	if (condition_put_123(argv, j, i) == 2)
		print_123_coldown(argv, j, i, tab);
	if (condition_put_123(argv, j, i) == 3)
		print_123_rowleft(j, i, tab);
	if (condition_put_123(argv, j, i) == 4)
		print_123_rowright(j, i, tab);
	if (condition_put_4_23(argv, j, i) == 1)
		print_4_23_colup(argv, j, i, tab);
	if (condition_put_4_23(argv, j, i) == 2)
		print_4_23_coldown(argv, j, i, tab);
	if (condition_put_4_23(argv, j, i) == 3)
		print_4_23_rowleft(j, i, tab);
	if (condition_put_4_23(argv, j, i) == 4)
		print_4_23_rowright(j, i, tab);
	all_conditions_2(argv, j, i, tab);
}

void	all_conditions_2(char *argv, int j, int i, int tab[4][4])
{
	condition_2_xxx4(argv, j, i, tab);
	condition_2_xx43(argv, j, i, tab);
	condition_3_2x4x(argv, j, i, tab);
	condition_3_xx43(argv, j, i, tab);
	condition_3_xx42(argv, j, i, tab);
	condition2_3_xx14(argv, j, i, tab);
	condition2_3_x24x(argv, j, i, tab);
	condition3_3_1xx4(argv, j, i, tab);
	condition3_3_x1x4(argv, j, i, tab);
	last_place_1(j, i, tab);
	last_place_2(j, i, tab);
	last_place_3(j, i, tab);
	last_place_4(j, i, tab);
	condition_reste_col(j, i, tab, 0);
	condition_reste_lig(j, i, tab, 0);
}

void	print_tab(int tab[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i <= 3)
	{
		j = 0;
		while (j <= 3)
		{
			if (tab[i][j] == 1)
				write(1, "1", 1);
			else if (tab[i][j] == 2)
				write(1, "2", 1);
			else if (tab[i][j] == 3)
				write(1, "3", 1);
			else if (tab[i][j] == 4)
				write(1, "4", 1);
			if (j < 3)
				write(1, " ", 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

void	ft_while(char *argv, int j, int i, int tab[4][4])
{
	int	counter;

	counter = 0;
	while (counter <= 3)
	{
		while (i <= 3)
		{
			while (j <= 3)
			{
				all_conditions(argv, j, i, tab);
				j++;
			}
			i++;
			j = 0;
		}
		i = 0;
		j = 0;
		counter++;
	}
}

void	ft_rush(char *argv, int tab[4][4], int counter)
{
	int	i;
	int	j;
	int	nb;

	i = 0;
	j = 0;
	ft_while(argv, i, j, tab);
	nb = ft_nb(i, j, tab);
	if (nb == 40 && (counter <= 3 && counter >= 0))
	{
		if (nb_col(j, i, tab, 0) == 1 && nb_lig(j, i, tab, 0) == 1)
			print_tab(tab);
	}
	else if (counter == 0 && nb != 40)
		condition_besties(argv, j, i, tab);
	if (counter > 2 && nb_col(j, i, tab, 0) == 0 && nb_lig(j, i, tab, 0) == 0)
		ft_putstr("Error\n");
}
