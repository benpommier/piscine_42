/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_final.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:29:39 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/19 21:29:40 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		nb_lig(int j, int i, int tab[4][4], int t);
int		nb_col(int j, int i, int tab[4][4], int t);
void	condition_besties(char *argv, int j, int i, int tab[4][4]);
void	condition_besties_2(char *argv, int j, int i, int tab[4][4]);
void	condition_besties_3(char *argv, int j, int i, int tab[4][4]);
void	ft_putstr(char *str);

int	ft_nb(int j, int i, int tab[4][4])
{
	int	nb;

	nb = 0;
	while (i <= 3)
	{
		while (j <= 3)
		{
			nb = nb + tab[i][j];
			j++;
		}
		i++;
		j = 0;
	}
	return (nb);
}

int	nb_lig(int j, int i, int tab[4][4], int t)
{
	int	counter;

	counter = 0;
	j = t;
	i = 0;
	while (i <= 3)
	{
		counter = counter + tab[i][j];
		i++;
	}
	if (counter == 10 && t < 3)
	{
		t++;
		nb_lig(j, i, tab, t);
		return (1);
	}
	return (0);
}

int	nb_col(int j, int i, int tab[4][4], int t)
{
	int	counter;

	counter = 0;
	j = 0;
	i = t;
	while (j <= 3)
	{
		counter = counter + tab[i][j];
		j++;
	}
	if (counter == 10 && t < 3)
	{
		t++;
		nb_col(j, i, tab, t);
		return (1);
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		write(1, &str[counter], 1);
		counter++;
	}
}
