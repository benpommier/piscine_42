/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition2_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 15:50:50 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/19 15:50:52 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	condition2_3_x24x_p2(char *argv, int j, int i, int tab[4][4]);
void	condition2_3_xx14_p2(char *argv, int j, int i, int tab[4][4]);

void	condition_3_xx42_p2(char *argv, int j, int i, int tab[4][4])
{
	int	o;

	if (j == 0 && (i >= 0 && i <= 3))
	{
		o = 16 + i * 2;
		if (argv[o] == '3' && tab[i][2] == 4
			&& tab[i][3] == 2)
		{
			tab[i][0] = 1;
			tab[i][1] = 3;
		}
	}
	if (j == 3 && (i >= 0 && i <= 3))
	{
		o = 24 + i * 2;
		if (argv[o] == '3' && tab[i][1] == 4
			&& tab[i][0] == 2)
		{
			tab[i][3] = 1;
			tab[i][2] = 3;
		}
	}
}

void	condition2_3_x24x(char *argv, int j, int i, int tab[4][4])
{
	int	o;

	o = 2 * j;
	if (argv[o] == '3' && tab[2][j] == 4
		&& tab[1][j] == 2)
	{
		tab[0][j] = 1;
		tab[3][j] = 3;
	}
	if (i == 3 && (j >= 0 && j <= 3))
	{
		o = 8 + j * 2;
		if (argv[o] == '3' && tab[1][j] == 4
			&& tab[2][j] == 2)
		{
			tab[3][j] = 1;
			tab[0][j] = 3;
		}
	}
	condition2_3_x24x_p2(argv, j, i, tab);
}

void	condition2_3_x24x_p2(char *argv, int j, int i, int tab[4][4])
{
	int	o;

	if (j == 0 && (i >= 0 && i <= 3))
	{
		o = 16 + i * 2;
		if (argv[o] == '3' && argv[o + 8] == '2'
			&& tab[i][1] == 2)
		{
			tab[i][0] = 1;
			tab[i][3] = 3;
		}
	}
	if (j == 3 && (i >= 0 && i <= 3))
	{
		o = 24 + i * 2;
		if (argv[o] == '3' && tab[i][1] == 4
			&& tab[i][2] == 2)
		{
			tab[i][3] = 1;
			tab[i][0] = 3;
		}
	}
}

void	condition2_3_xx14(char *argv, int j, int i, int tab[4][4])
{
	int	o;

	o = 2 * j;
	if (argv[o] == '3' && tab[2][j] == 1
		&& tab[3][j] == 4)
	{
		tab[0][j] = 2;
		tab[1][j] = 3;
	}
	if (i == 3 && (j >= 0 && j <= 3))
	{
		o = 8 + j * 2;
		if (argv[o] == '3' && tab[1][j] == 1
			&& tab[0][j] == 4)
		{
			tab[3][j] = 2;
			tab[2][j] = 3;
		}
	}
	condition2_3_xx14_p2(argv, j, i, tab);
}

void	condition2_3_xx14_p2(char *argv, int j, int i, int tab[4][4])
{
	int	o;

	if (j == 0 && (i >= 0 && i <= 3))
	{
		o = 16 + i * 2;
		if (argv[o] == '3' && tab[i][2] == 1
			&& tab[i][3] == 4)
		{
			tab[i][0] = 2;
			tab[i][1] = 3;
		}
	}
	if (j == 3 && (i >= 0 && i <= 3))
	{
		o = 24 + i * 2;
		if (argv[o] == '3' && tab[i][1] == 1
			&& tab[i][0] == 4)
		{
			tab[i][3] = 2;
			tab[i][2] = 3;
		}
	}
}
