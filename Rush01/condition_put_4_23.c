/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition_put_4-23.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 19:23:18 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/18 19:23:20 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	condition_put_4_23(char *argv, int j, int i)
{
	int	o;

	o = 2 * j;
	if (argv[o] == '2' && argv[o + 8] == '3' && i == 0)
		return (1);
	if (i == 3 && (j >= 0 && j <= 3))
	{
		o = 8 + j * 2;
		if (argv[o] == '2' && argv[o - 8] == '3' && i == 3)
			return (2);
	}
	if (j == 0 && (i >= 0 && i <= 3))
	{
		o = 16 + i * 2;
		if (argv[o] == '2' && argv[o + 8] == '3' && j == 0)
			return (3);
	}
	if (j == 3 && (i >= 0 && i <= 3))
	{
		o = 24 + i * 2;
		if (argv[o] == '2' && argv[o - 8] == '3' && j == 3)
			return (4);
	}
	return (0);
}

void	print_4_23_colup(char *argv, int j, int i, int tab[4][4])
{
	tab[i + 1][j] = 4;
	if (i == j && argv[16] == '2' && argv[24] == '3')
		tab[i][j + 1] = 4;
	else if (j == 3 && i == 0 && argv[24] == '2' && argv[16] == '3')
		tab[i][j - 1] = 4;
}

void	print_4_23_coldown(char *argv, int j, int i, int tab[4][4])
{
	tab[i - 1][j] = 4;
	if (j == 0 && i == 3 && argv[22] == '2' && argv[30] == '3')
		tab[i][j + 1] = 4;
	else if (i == j && argv[30] == '2' && argv[22] == '3')
		tab[i][j - 1] = 4;
}

void	print_4_23_rowleft(int j, int i, int tab[4][4])
{
	tab[i][j + 1] = 4;
}

void	print_4_23_rowright(int j, int i, int tab[4][4])
{
	tab[i][j - 1] = 4;
}
