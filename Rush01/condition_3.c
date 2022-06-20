/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 12:04:02 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/19 12:04:03 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	condition_3_2x4x_p2(char *argv, int j, int i, int tab[4][4]);
void	condition_3_xx43_p2(char *argv, int j, int i, int tab[4][4]);
void	condition_3_xx42_p2(char *argv, int j, int i, int tab[4][4]);

void	condition_3_2x4x(char *argv, int j, int i, int tab[4][4])
{
	int	o;

	o = 2 * j;
	if (argv[o] == '3' && tab[0][j] == 2
		&& tab[2][j] == 4)
	{
		tab[1][j] = 3;
		tab[3][j] = 1;
	}
	if (i == 3 && (j >= 0 && j <= 3))
	{
		o = 8 + j * 2;
		if (argv[o] == '3' && tab[3][j] == 2
			&& tab[1][j] == 4)
		{
			tab[2][j] = 3;
			tab[0][j] = 1;
		}
	}
	condition_3_2x4x_p2(argv, j, i, tab);
}

void	condition_3_2x4x_p2(char *argv, int j, int i, int tab[4][4])
{
	int	o;

	if (j == 0 && (i >= 0 && i <= 3))
	{
		o = 16 + i * 2;
		if (argv[o] == '3' && tab[i][0] == 2
			&& tab[i][2] == 4)
		{
			tab[i][1] = 3;
			tab[i][3] = 1;
		}
	}
	if (j == 3 && (i >= 0 && i <= 3))
	{
		o = 24 + i * 2;
		if (argv[o] == '3' && tab[i][3] == 2
			&& tab[i][1] == 4)
		{
			tab[i][2] = 3;
			tab[i][0] = 1;
		}
	}
}

void	condition_3_xx43(char *argv, int j, int i, int tab[4][4])
{
	int	o;

	o = 2 * j;
	if (argv[o] == '3' && tab[2][j] == 4
		&& tab[3][j] == 3)
	{
		tab[0][j] = 1;
		tab[1][j] = 2;
	}
	if (i == 3 && (j >= 0 && j <= 3))
	{
		o = 8 + j * 2;
		if (argv[o] == '3' && tab[1][j] == 4
			&& tab[0][j] == 3)
		{
			tab[3][j] = 1;
			tab[2][j] = 2;
		}
	}
	condition_3_xx43_p2(argv, j, i, tab);
}

void	condition_3_xx43_p2(char *argv, int j, int i, int tab[4][4])
{
	int	o;

	if (j == 0 && (i >= 0 && i <= 3))
	{
		o = 16 + i * 2;
		if (argv[o] == '3' && tab[i][2] == 4
			&& tab[i][3] == 3)
		{
			tab[i][0] = 1;
			tab[i][1] = 2;
		}
	}
	if (j == 3 && (i >= 0 && i <= 3))
	{
		o = 24 + i * 2;
		if (argv[o] == '3' && tab[i][1] == 4
			&& tab[i][0] == 3)
		{
			tab[i][3] = 1;
			tab[i][2] = 2;
		}
	}
}

void	condition_3_xx42(char *argv, int j, int i, int tab[4][4])
{
	int	o;

	o = 2 * j;
	if (argv[o] == '3' && tab[2][j] == 4
		&& tab[3][j] == 2)
	{
		tab[0][j] = 1;
		tab[1][j] = 3;
	}
	if (i == 3 && (j >= 0 && j <= 3))
	{
		o = 8 + j * 2;
		if (argv[o] == '3' && tab[1][j] == 4
			&& tab[0][j] == 2)
		{
			tab[3][j] = 1;
			tab[2][j] = 3;
		}
	}
	condition_3_xx42_p2(argv, j, i, tab);
}
