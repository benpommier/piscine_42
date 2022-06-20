/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_place.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 17:19:06 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/19 17:19:07 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	last_place_1(int j, int i, int tab[4][4])
{
	int	counter;
	int	pos_j;
	int	pos_i;

	counter = 0;
	j = -1;
	i = -1;
	pos_j = 0;
	pos_i = 0;
	while (i++ <= 3)
	{
		while (j++ <= 3)
		{
			if (tab[i][j] == 1)
			{
				counter++;
				pos_j += j;
				pos_i += i;
			}
		}
		j = 0;
	}
	if (counter == 3)
		tab[6 - pos_i][6 - pos_j] = 1;
}

void	last_place_2(int j, int i, int tab[4][4])
{
	int	counter;
	int	pos_j;
	int	pos_i;

	counter = 0;
	j = -1;
	i = -1;
	pos_j = 0;
	pos_i = 0;
	while (i++ <= 3)
	{
		while (j++ <= 3)
		{
			if (tab[i][j] == 2)
			{
				counter++;
				pos_j += j;
				pos_i += i;
			}
		}
		j = 0;
	}
	if (counter == 3)
		tab[6 - pos_i][6 - pos_j] = 2;
}

void	last_place_3(int j, int i, int tab[4][4])
{
	int	counter;
	int	pos_j;
	int	pos_i;

	counter = 0;
	j = -1;
	i = -1;
	pos_j = 0;
	pos_i = 0;
	while (i++ <= 3)
	{
		while (j++ <= 3)
		{
			if (tab[i][j] == 3)
			{
				counter++;
				pos_j += j;
				pos_i += i;
			}
		}
		j = 0;
	}
	if (counter == 3)
		tab[6 - pos_i][6 - pos_j] = 3;
}

void	last_place_4(int j, int i, int tab[4][4])
{
	int	counter;
	int	pos_j;
	int	pos_i;

	counter = 0;
	j = -1;
	i = -1;
	pos_j = 0;
	pos_i = 0;
	while (i++ <= 3)
	{
		while (j++ <= 3)
		{
			if (tab[i][j] == 4)
			{
				counter++;
				pos_j += j;
				pos_i += i;
			}
		}
		j = 0;
	}
	if (counter == 3)
		tab[6 - pos_i][6 - pos_j] = 4;
}
