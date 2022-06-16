/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudloff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 10:38:32 by mrudloff          #+#    #+#             */
/*   Updated: 2022/06/12 13:37:27 by alamizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

int	check(int x, int y)
{
	if (x <= 0 || y <= 0)
		return (0);
	return (1);
}

void	ft_condition(int i, int j, int x, int y)
{
	if ((i || j) == 0 || (i == x - 1 && j == 0))
		ft_putchar('o');
	else if (j == y - 1 && (i == 0 || i == x - 1))
		ft_putchar('o');
	else if ((j != 0 || j != y - 1) && (i == 0 || i == x - 1))
		ft_putchar('|');
	else if ((j == 0 || j == y - 1) && (i != 0 || i != x - 1))
		ft_putchar('-');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;
	int	error;	

	error = check(x, y);
	i = 0;
	j = 0;
	if (error == 0)
		j = y;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			ft_condition(i, j, x, y);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}
