/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition_put_123.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:14:25 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/18 15:14:35 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	condition_put_123(char *argv, int j, int i)
{
	int	o;

	o = 2 * j;
	if (argv[o] == '4' && i == 0)
		return (1);
	if (i == 3 && (j >= 0 && j <= 3))
		o = 8 + j * 2;
	if (argv[o] == '4' && i == 3)
		return (2);
	if (j == 0 && (i >= 0 && i <= 3))
		o = 16 + i * 2;
	if (argv[o] == '4' && j == 0)
		return (3);
	if (j == 3 && (i >= 0 && i <= 3))
		o = 24 + i * 2;
	if (argv[o] == '4' && j == 3)
		return (4);
	return (0);
}

void	print_123_colup(char *argv, int j, int i, int tab[4][4])
{
	tab[i][j] = 1;
	tab[i + 1][j] = 2;
	tab[i + 2][j] = 3;
	if (i == j && argv[16] == '4')
	{
		tab[i][j + 1] = 2;
		tab[i][j + 2] = 3;
	}
	else if (j == 3 && i == 0 && argv[24] == '4')
	{
		tab[i][j - 1] = 2;
		tab[i][j - 2] = 3;
	}
}

void	print_123_coldown(char *argv, int j, int i, int tab[4][4])
{
	tab[i][j] = 1;
	tab[i - 1][j] = 2;
	tab[i - 2][j] = 3;
	if (j == 0 && i == 3 && argv[22] == '4')
	{
		tab[i][j + 1] = 2;
		tab[i][j + 2] = 3;
	}
	else if (i == j && argv[30] == '4')
	{
		tab[i][j - 1] = 2;
		tab[i][j - 2] = 3;
	}
}

void	print_123_rowleft(int j, int i, int tab[4][4])
{
	tab[i][j] = 1;
	tab[i][j + 1] = 2;
	tab[i][j + 2] = 3;
}

void	print_123_rowright(int j, int i, int tab[4][4])
{
	tab[i][j] = 1;
	tab[i][j - 1] = 2;
	tab[i][j - 2] = 3;
}
