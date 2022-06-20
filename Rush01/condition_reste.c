/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition_reste.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 19:29:05 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/18 19:29:06 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	number_left(int x, int y, int tab[4][4])
{
	if (tab[x][y] == 0)
		return (0);
	else if (tab[x][y] == 1)
		return (1);
	else if (tab[x][y] == 2)
		return (2);
	else if (tab[x][y] == 3)
		return (3);
	else if (tab[x][y] == 4)
		return (4);
	return (0);
}

int	condition_reste_col(int x, int y, int tab[4][4], int reset)
{
	int	counter_zero;
	int	i;
	int	pos_x;

	x = 0;
	y = reset;
	i = 0;
	counter_zero = 0;
	while (x <= 3)
	{
		if (number_left(x, y, tab) == 0)
		{
			counter_zero++;
			pos_x = x;
		}
		else
			i += number_left(x, y, tab);
		x++;
	}
	if (counter_zero == 1)
		tab[pos_x][y] = 10 - i;
	if (reset < 3)
		condition_reste_col(x, y, tab, reset + 1);
	return (0);
}

int	condition_reste_lig(int x, int y, int tab[4][4], int reset)
{
	int	counter_zero;
	int	i;
	int	pos_y;

	x = reset;
	y = 0;
	i = 0;
	counter_zero = 0;
	while (y <= 3)
	{
		if (number_left(x, y, tab) == 0)
		{
			counter_zero++;
			pos_y = y;
		}
		else
			i += number_left(x, y, tab);
		y++;
	}
	if (counter_zero == 1)
		tab[x][pos_y] = 10 - i;
	if (reset < 3)
		condition_reste_lig(x, y, tab, reset + 1);
	return (0);
}
