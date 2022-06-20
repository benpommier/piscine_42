/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition_besties.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 18:55:02 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/19 18:55:04 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	condition_besties_2(char *argv, int j, int i, int tab[4][4]);
void	condition_besties_p2(char *argv, int j, int tab[4][4]);
void	condition_besties_p3(char *argv, int j, int i, int tab[4][4]);
void	condition_besties_p4(char *argv, int j, int i, int tab[4][4]);
void	condition_besties_p5(char *argv, int j, int i, int tab[4][4]);
void	ft_rush(char *argv, int tab[4][4], int counter);

void	condition_besties(char *argv, int j, int i, int tab[4][4])
{
	i = 0;
	j = 0;
	while (i <= 3)
	{
		while (j <= 3)
		{
			condition_besties_p2(argv, j, tab);
			condition_besties_p3(argv, j, i, tab);
			condition_besties_p4(argv, j, i, tab);
			condition_besties_p5(argv, j, i, tab);
			j++;
		}
		i++;
		j = 0;
	}
	condition_besties_2(argv, j, i, tab);
}

void	condition_besties_p2(char *argv, int j, int tab[4][4])
{
	int	o;

	o = 2 * j;
	if (argv[o] == '3' && tab[3][j] == 4 && tab[0][j] == 0
		&& tab[1][j] == 0 && tab[2][j] == 0)
	{
		tab[0][j] = 1;
		tab[1][j] = 3;
		tab[2][j] = 2;
		ft_rush(argv, tab, 1);
	}
}

void	condition_besties_p3(char *argv, int j, int i, int tab[4][4])
{
	int	o;

	if (i == 3 && (j >= 0 && j <= 3))
	{
		o = 8 + j * 2;
		if (argv[o] == '3' && tab[0][j] == 4 && tab[3][j] == 0
			&& tab[2][j] == 0 && tab[1][j] == 0)
		{
			tab[3][j] = 1;
			tab[2][j] = 3;
			tab[1][j] = 2;
			ft_rush(argv, tab, 1);
		}
	}
}

void	condition_besties_p4(char *argv, int j, int i, int tab[4][4])
{
	int	o;

	if (j == 0 && (i >= 0 && i <= 3))
	{
		o = 16 + i * 2;
		if (argv[o] == '3' && tab[i][3] == 4 && tab[i][0] == 0
			&& tab[i][1] == 0 && tab[i][2] == 0)
		{
			tab[i][0] = 1;
			tab[i][1] = 3;
			tab[i][2] = 2;
			ft_rush(argv, tab, 1);
		}
	}
}

void	condition_besties_p5(char *argv, int j, int i, int tab[4][4])
{
	int	o;

	if (j == 3 && (i >= 0 && i <= 3))
	{
		o = 24 + i * 2;
		if (argv[o] == '3' && tab[i][0] == 4 && tab[i][1] == 0
			&& tab[i][2] == 0 && tab[i][3] == 0)
		{
			tab[i][3] = 1;
			tab[i][2] = 3;
			tab[i][1] = 2;
			ft_rush(argv, tab, 1);
		}
	}
}
