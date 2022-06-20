/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition3_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:29:27 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/19 16:29:28 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	condition3_3_1xx4_p2(char *argv, int j, int i, int tab[4][4]);
void	condition3_3_x1x4_p2(char *argv, int j, int i, int tab[4][4]);

void	condition3_3_1xx4(char *argv, int j, int i, int tab[4][4])
{
	int	o;

	o = 2 * j;
	if (argv[o] == '3' && tab[0][j] == 1
		&& tab[3][j] == 4)
	{
		tab[1][j] = 3;
		tab[2][j] = 2;
	}
	if (i == 3 && (j >= 0 && j <= 3))
	{
		o = 8 + j * 2;
		if (argv[o] == '3' && tab[3][j] == 1
			&& tab[0][j] == 4)
		{
			tab[2][j] = 3;
			tab[1][j] = 2;
		}
	}
	condition3_3_1xx4_p2(argv, j, i, tab);
}

void	condition3_3_1xx4_p2(char *argv, int j, int i, int tab[4][4])
{
	int	o;

	if (j == 0 && (i >= 0 && i <= 3))
	{
		o = 16 + i * 2;
		if (argv[o] == '3' && tab[i][0] == 1
			&& tab[i][3] == 4)
		{
			tab[i][1] = 3;
			tab[i][2] = 2;
		}
	}
	if (j == 3 && (i >= 0 && i <= 3))
	{
		o = 24 + i * 2;
		if (argv[o] == '3' && tab[i][3] == 1
			&& tab[i][0] == 4)
		{
			tab[i][2] = 3;
			tab[i][1] = 2;
		}
	}
}

void	condition3_3_x1x4(char *argv, int j, int i, int tab[4][4])
{
	int	o;

	o = 2 * j;
	if (argv[o] == '3' && tab[1][j] == 1
		&& tab[3][j] == 4)
	{
		tab[0][j] = 2;
		tab[2][j] = 3;
	}
	if (i == 3 && (j >= 0 && j <= 3))
	{
		o = 8 + j * 2;
		if (argv[o] == '3' && tab[2][j] == 1
			&& tab[0][j] == 4)
		{
			tab[3][j] = 2;
			tab[1][j] = 3;
		}
	}
	condition3_3_x1x4_p2(argv, j, i, tab);
}

void	condition3_3_x1x4_p2(char *argv, int j, int i, int tab[4][4])
{
	int	o;

	if (j == 0 && (i >= 0 && i <= 3))
	{
		o = 16 + i * 2;
		if (argv[o] == '3' && tab[i][1] == 1
			&& tab[i][3] == 4)
		{
			tab[i][0] = 2;
			tab[i][2] = 3;
		}
	}
	if (j == 3 && (i >= 0 && i <= 3))
	{
		o = 24 + i * 2;
		if (argv[o] == '3' && tab[i][2] == 1
			&& tab[i][0] == 4)
		{
			tab[i][3] = 2;
			tab[i][1] = 3;
		}
	}
}
