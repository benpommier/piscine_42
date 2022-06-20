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
void	condition_besties_3(char *argv, int j, int i, int tab[4][4]);
void	ft_rush(char *argv, int tab[4][4], int counter);
void	condition_besties_2_p2(char *argv, int j, int tab[4][4]);
void	condition_besties_2_p3(char *argv, int j, int i, int tab[4][4]);
void	condition_besties_2_p4(char *argv, int j, int i, int tab[4][4]);
void	condition_besties_2_p5(char *argv, int j, int i, int tab[4][4]);

void	condition_besties_2(char *argv, int j, int i, int tab[4][4])
{
	i = 0;
	j = 0;
	while (i <= 3)
	{
		while (j <= 3)
		{
			condition_besties_2_p2(argv, j, tab);
			condition_besties_2_p3(argv, j, i, tab);
			condition_besties_2_p4(argv, j, i, tab);
			condition_besties_2_p5(argv, j, i, tab);
			j++;
		}
		i++;
		j = 0;
	}
	condition_besties_3(argv, j, i, tab);
}

void	condition_besties_2_p2(char *argv, int j, int tab[4][4])
{
	int	o;

	o = 2 * j;
	if (argv[o] == '3' && tab[3][j] == 4 && tab[0][j] == 1
		&& tab[1][j] == 3 && tab[2][j] == 2)
	{
		tab[0][j] = 2;
		tab[1][j] = 3;
		tab[2][j] = 1;
		ft_rush(argv, tab, 2);
	}
}

void	condition_besties_2_p3(char *argv, int j, int i, int tab[4][4])
{
	int	o;

	if (i == 3 && (j >= 0 && j <= 3))
	{
		o = 8 + j * 2;
		if (argv[o] == '3' && tab[0][j] == 4 && tab[3][j] == 1
			&& tab[2][j] == 3 && tab[1][j] == 2)
		{
			tab[3][j] = 2;
			tab[2][j] = 3;
			tab[1][j] = 1;
			ft_rush(argv, tab, 2);
		}
	}
}

void	condition_besties_2_p4(char *argv, int j, int i, int tab[4][4])
{
	int	o;

	if (j == 0 && (i >= 0 && i <= 3))
	{
		o = 16 + i * 2;
		if (argv[o] == '3' && tab[i][3] == 4 && tab[i][0] == 1
			&& tab[i][1] == 3 && tab[i][2] == 2)
		{
			tab[i][0] = 2;
			tab[i][1] = 3;
			tab[i][2] = 1;
			ft_rush(argv, tab, 2);
		}
	}
}

void	condition_besties_2_p5(char *argv, int j, int i, int tab[4][4])
{
	int	o;

	if (j == 3 && (i >= 0 && i <= 3))
	{
		o = 24 + i * 2;
		if (argv[o] == '3' && tab[i][0] == 4 && tab[i][1] == 1
			 && tab[i][2] == 3 && tab[i][3] == 2)
		{
			tab[i][3] = 2;
			tab[i][2] = 3;
			tab[i][1] = 1;
			ft_rush(argv, tab, 2);
		}
	}
}
